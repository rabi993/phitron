const loadPlayers = async (searchText = '', dataLimit) => {
    const url = `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchText}`;
    const res = await fetch(url);
    const data = await res.json();
    console.log(data.player);
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
    if (cart.length >= 11) {
        alert("You can only add 11 players to the cart.");
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

    const noPlayer = document.getElementById('no-found-message');
    toggleSpinner(false);

    if (!players || players.length === 0) {
        noPlayer.classList.remove('d-none');
        showAll.classList.add('d-none'); 
        return; 
    } 
    else {
        noPlayer.classList.add('d-none');
    }

    if (dataLimit && players.length > 9) {
        players = players.slice(0, 9); 
        showAll.classList.remove('d-none');
    } 
    else {
        showAll.classList.add('d-none');
    }

    players.forEach(player => {
        const playerDiv = document.createElement('div');
        playerDiv.classList.add('col');
        playerDiv.innerHTML = `
            <div class="card">
                <img src="${player.strThumb}" class="card-img-top p-4 cardImg" alt="${player.strPlayer}">
                
                <div class="card-body pm">
                    <h5 class="card-title text-center">${player.strPlayer}</h5>
                    <hr>
                    <p><strong>Nationality:</strong> ${player.strNationality}</p>
                    <p><strong>Team:</strong> ${player.strTeam}</p>
                    <p><strong>Sport:</strong> ${player.strSport}</p>
                    <p><strong>Position:</strong> ${player.strPosition}</p>
                    <p><strong>Description:</strong> ${player.strDescriptionEN.slice(0,50)}</p>
                    <div class="icdiv">
                        <div>
                            <a href="${player.strFacebook}"><img  class="icon" src="images/facebook-logo.png" alt=""></a>
        
                        </div>
                        <div>
                            <a href="${player.strTwitter}"><img class="icon" src="images/twitter.png" alt=""></a>
                        </div>
                        <div>
                            <a href="${player.strTwitter}"><img class="icon" src="images/instagram (1).png" alt=""></a>
                        </div>
                    </div>





                    <button onclick="loadPlayerDetails('${player.idPlayer}')" class="btn btn-info" data-bs-toggle="modal" data-bs-target="#PlayerDetailModal">Details</button>
                    
                    <button id="bbb" onclick="loadPlayerDetails1('${player.idPlayer}')" class="btn btn-primary   ">Add to Cart</button>
                    
                </div>
            </div>`;
        playersContainer.appendChild(playerDiv);
    });
    

    
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
        <img src="${player.strThumb}" class="img-fluid mb-3 cardImg1" alt="${player.strPlayer}">
        
        
        <hr>
        <p><strong>Nationality:</strong> ${player.strNationality}</p>
        <p><strong>Team:</strong> ${player.strTeam}</p>
        <p><strong>Sport:</strong> ${player.strSport}</p>
        <p><strong>Gender:</strong> ${player.strGender}</p>
        <p><strong>Weight:</strong> ${player.strWeight}</p>
        <p><strong>Height:</strong> ${player.strHeight}</p>
        <p><strong>Description:</strong> ${player.strDescriptionEN.slice(0,50)}</p>
        <div class="icdiv">
            <div>
                <a href="${player.strFacebook}"><img  class="icon" src="images/facebook-logo.png" alt=""></a>

            </div>
            <div>
                <a href="${player.strTwitter}"><img class="icon" src="images/twitter.png" alt=""></a>
            </div>
            <div>
                <a href="${player.strTwitter}"><img class="icon" src="images/instagram (1).png" alt=""></a>
            </div>
        </div>
        
        `;
        

};

// Add current modal player to cart
document.getElementById('modal-add-to-cart').addEventListener('click', () => {
    if (currentPlayer) {
        addToCart(currentPlayer);
    }
});

// Process search function
const processSearch = (dataLimit) => {
    // toggleSpinner(true);
    const searchField = document.getElementById('search-field');
    const searchText = searchField.value.trim();
    loadPlayers(searchText, dataLimit);
};

// Event listeners for search buttons
document.getElementById('btn-search').addEventListener('click', function () {
    processSearch(9); // Limit search to 6 players
});

document.getElementById('search-field').addEventListener('keypress', function (event) {
    if (event.key === 'Enter') {
        processSearch(9);
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
    toggleSpinner(true)
    loadPlayers('ab', 9);
};
