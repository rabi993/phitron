const loadPlayers = async (searchText = '', dataLimit) => {
    const url = `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchText}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPlayers(data.player, dataLimit); // Display players
};


let cart = []; // Cart array to hold added players
let currentPlayer = null; // To store the current player shown in the modal

// Function to add player to cart
const addToCart = (player) => {
    // Check if player already exists in the cart
    if (cart.some(p => p.idPlayer === player.idPlayer)) {
        alert("Player is already in the cart.");
        return;
    }

    // Limit cart to 5 players
    if (cart.length >= 5) {
        alert("You can only add 5 players to the cart.");
        return;
    }

    // Add player to the cart
    cart.push(player);
    updateCartDisplay();
};

// Function to update cart display
const updateCartDisplay = () => {
    const cartList = document.getElementById('cart-list');
    const cartCount = document.getElementById('cart-count');
    
    // Clear the current cart list
    cartList.innerHTML = '';

    // Update cart count
    cartCount.textContent = cart.length;

    // Populate the cart with players
    cart.forEach(player => {
        const listItem = document.createElement('li');
        listItem.classList.add('list-group-item');
        listItem.textContent = player.strPlayer;
        cartList.appendChild(listItem);
    });
};

// Function to display players in cards
const displayPlayers = (players, dataLimit) => {
    const playersContainer = document.getElementById('Players-container');
    playersContainer.textContent = ''; // Clear previous results

    const showAll = document.getElementById('show-all');
    if (dataLimit && players.length > 6) {
        players = players.slice(0, 6); // Limit to 6 players
        showAll.classList.remove('d-none');
    } else {
        showAll.classList.add('d-none');
    }

    const noPlayerMessage = document.getElementById('no-found-message');
    if (!players || players.length === 0) {
        noPlayerMessage.classList.remove('d-none');
    } else {
        noPlayerMessage.classList.add('d-none');
        players.forEach(player => {
            const playerDiv = document.createElement('div');
            playerDiv.classList.add('col');
            playerDiv.innerHTML = `
                <div class="card">
                    <img src="${player.strThumb}" class="card-img-top p-4" alt="${player.strPlayer}">
                    <div class="card-body">
                        <h5 class="card-title">${player.strPlayer}</h5>
                        <p class="card-text">Position: ${player.strPosition}</p>
                        <button onclick="loadPlayerDetails('${player.idPlayer}')" class="btn btn-info" data-bs-toggle="modal" data-bs-target="#PlayerDetailModal">Details</button>
                        
                        <button id="bbb" onclick="loadPlayerDetails1('${player.idPlayer}')" class="btn btn-primary   mt-2">Add to Cart</button>
                        
                    </div>
                </div>`;
            playersContainer.appendChild(playerDiv);
        });
    }

    toggleSpinner(false);
};

const loadPlayerDetails1 = async (id) => {
    const url = `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    currentPlayer= data.players[0];
    addToCart(currentPlayer);
};


// Function to load player details in modal
const loadPlayerDetails = async (id) => {
    const url = `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPlayerDetails(data.players[0]);
    
};


// Function to display player details in the modal
const displayPlayerDetails = (player) => {
    currentPlayer = player; // Store the current player to use in "Add to Cart"

    const modalTitle = document.getElementById('PlayerDetailModalLabel');
    modalTitle.innerText = player.strPlayer;

    const playerDetails = document.getElementById('Player-details');
    playerDetails.innerHTML = `
        <img src="${player.strThumb}" class="img-fluid mb-3" alt="${player.strPlayer}">
        <p><strong>Nationality:</strong> ${player.strNationality}</p>
        <p><strong>Team:</strong> ${player.strTeam}</p>
        <p><strong>Position:</strong> ${player.strPosition}</p>
        <p><strong>Description:</strong> ${player.strDescriptionEN}</p>`;
};

// Add current modal player to cart
document.getElementById('modal-add-to-cart').addEventListener('click', () => {
    if (currentPlayer) {
        addToCart(currentPlayer);
    }
});

// Process search function
const processSearch = (dataLimit) => {
    toggleSpinner(true);
    const searchField = document.getElementById('search-field');
    const searchText = searchField.value.trim();
    loadPlayers(searchText, dataLimit);
};

// Event listeners for search buttons
document.getElementById('btn-search').addEventListener('click', function () {
    processSearch(6); // Limit search to 6 players
});

document.getElementById('search-field').addEventListener('keypress', function (event) {
    if (event.key === 'Enter') {
        processSearch(6);
    }
});

document.getElementById('btn-show-all').addEventListener('click', function () {
    processSearch(); // Show all players when 'Show All' is clicked
});

// Toggle spinner function
const toggleSpinner = isLoading => {
    const loaderSection = document.getElementById('loader');
    if (isLoading) {
        loaderSection.classList.remove('d-none');
    } else {
        loaderSection.classList.add('d-none');
    }
};

// Load default players on page load
window.onload = () => {
    toggleSpinner(true);
    loadPlayers('c', 9); // Default search for 'c' with a limit of 6
};
