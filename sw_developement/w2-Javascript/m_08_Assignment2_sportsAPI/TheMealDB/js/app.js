const loadPlayers = async (searchText = '', dataLimit) => {
    const url = `https://www.themealdb.com/api/json/v1/1/search.php?s=${searchText}`;
    const res = await fetch(url);
    const data = await res.json();
    // console.log(data.meals);
    displayPlayers(data.meals, dataLimit); 
};


let cart = []; 
let currentPlayer = null; 

const addToCart = (meals) => {
    if (cart.some(p => p.idMeal === meals.idMeal)) {
        alert("meal is already in the cart.");
        return;
    }

    if (cart.length >= 11) {
        alert("You can only add 11 meals to the cart.");
        return;
    }

    cart.push(meals);
    updateCartDisplay();
    
};

const updateCartDisplay = () => {
    const cartList = document.getElementById('cart-list');
    const cartCount = document.getElementById('cart-count');
    
    cartList.innerHTML = '';

    cartCount.textContent = cart.length;

    cart.forEach(meals => {
        const listItem = document.createElement('li');
        listItem.classList.add('list-group-item');
        listItem.textContent = meals.strMeal;
        cartList.appendChild(listItem);
    });
};

const displayPlayers = (meals, dataLimit) => {
    const playersContainer = document.getElementById('Players-container');
    playersContainer.textContent = ''; 

    const showAll = document.getElementById('show-all');

    const noPlayer = document.getElementById('no-found-message');
    toggleSpinner(false);

    if (!meals || meals.length === 0) {
        noPlayer.classList.remove('d-none');
        showAll.classList.add('d-none'); 
        return; 
    } 
    else {
        noPlayer.classList.add('d-none');
    }

    if (dataLimit && meals.length > 9) {
        meals = meals.slice(0, 9); 
        showAll.classList.remove('d-none');
    } 
    else {
        showAll.classList.add('d-none');
    }

    meals.forEach(meals => {
        const playerDiv = document.createElement('div');
        playerDiv.classList.add('col');
        playerDiv.innerHTML = `
            <div class="card">
                <img src="${meals.strImageSource}" class="card-img-top p-4 cardImg" alt="${meals.strMeal}">
                
                <div class="card-body pm">
                    <h5 class="card-title text-center">${meals.strMeal}</h5>
                    <hr>
                    <p><strong>Nationality:</strong> ${meals.strArea}</p>
                    <p><strong>Description:</strong> ${meals.strInstructions.slice(0,50)}</p>
                    <div class="icdiv">
                        <div>
                            <a href="${meals.strFacebook}" target="_blank"><img  class="icon" src="images/facebook-logo.png" alt=""></a>
        
                        </div>
                        <div>
                            <a href="${meals.strTwitter}" target="_blank"><img class="icon" src="images/twitter.png" alt=""></a>
                        </div>
                        <div>
                            <a href="${meals.strTwitter}" target="_blank"><img class="icon" src="images/instagram (1).png" alt=""></a>
                        </div>
                    </div>

                    <button onclick="loadPlayerDetails('${meals.idMeal}')" class="btn btn-info" data-bs-toggle="modal" data-bs-target="#PlayerDetailModal">Details</button>
                    
                    <button id="bbb" onclick="loadPlayerDetails1('${meals.idMeal}')" class="btn btn-primary   ">Add to Cart</button>
                    
                </div>
            </div>`;
        playersContainer.appendChild(playerDiv);
    });
    
};


const loadPlayerDetails1 = async (id) => {
    const url = `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    currentPlayer= data.meals[0];
    addToCart(currentPlayer);
    
};


const loadPlayerDetails = async (id) => {
    const url =`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPlayerDetails(data.meals[0]);
    
};


const displayPlayerDetails = (meals) => {
    currentPlayer = meals; 

    const modalTitle = document.getElementById('PlayerDetailModalLabel');
    modalTitle.innerText = meals.strMeal;

    const playerDetails = document.getElementById('Player-details');
    playerDetails.innerHTML = `
        <img src="${meals.strImageSource}" class="img-fluid mb-3 cardImg1" alt="${meals.strMeal}">
        
        
        <hr>
        <p><strong>Nationality:</strong> ${meals.strArea}</p>
        <p><strong>Description:</strong> ${meals.strInstructions.slice(0,50)}</p>
        <div class="icdiv">
            <div>
                <a href="${meals.strFacebook}" target="_blank"><img  class="icon" src="images/facebook-logo.png" alt=""></a>

            </div>
            <div>
                <a href="${meals.strTwitter}" target="_blank"><img class="icon" src="images/twitter.png" alt=""></a>
            </div>
            <div>
                <a href="${meals.strTwitter}" target="_blank"><img class="icon" src="images/instagram (1).png" alt=""></a>
            </div>
        </div>
        
        `;
        

};

document.getElementById('modal-add-to-cart').addEventListener('click', () => {
    if (currentPlayer) {
        addToCart(currentPlayer);
    }
});

const processSearch = (dataLimit) => {
    // toggleSpinner(true);
    const searchField = document.getElementById('search-field');
    const searchText = searchField.value.trim();
    loadPlayers(searchText, dataLimit);
};

document.getElementById('btn-search').addEventListener('click', function () {
    processSearch(9); 
});

document.getElementById('search-field').addEventListener('keypress', function (event) {
    if (event.key === 'Enter') {
        processSearch(9);
    }
});

document.getElementById('btn-show-all').addEventListener('click', function () {
    processSearch(); 
});

const toggleSpinner = isLoading => {
    const loaderSection = document.getElementById('loader');
    if (isLoading) {
        loaderSection.classList.remove('d-none');
    } else {
        loaderSection.classList.add('d-none');
    }
};

window.onload = () => {
    toggleSpinner(true)
    loadPlayers('a', 9);
};
