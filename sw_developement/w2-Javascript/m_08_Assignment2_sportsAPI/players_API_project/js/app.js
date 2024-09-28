
// const loadPlayers = async (searchText, dataLimit) => {
//     const url = `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchText}`;
//     const res = await fetch(url);
//     const data = await res.json();
//     displayPlayers(data.Players, dataLimit);
// };

// const displayPlayers = (Players, dataLimit) => {
//     const PlayersContainer = document.getElementById('Players-container');
//     PlayersContainer.textContent = '';
    
//     const showAll = document.getElementById('show-all');
//     if (dataLimit && Players.length > 6) {
//         Players = Players.slice(0, 6);
//         showAll.classList.remove('d-none');
//     } else {
//         showAll.classList.add('d-none');
//     }

//     const noplayer = document.getElementById('no-found-message');
//     if (!Players || Players.length === 0) {
//         noplayer.classList.remove('d-none');
//     } else {
//         noplayer.classList.add('d-none');
//         Players.forEach(Player => {
//             const PlayerDiv = document.createElement('div');
//             PlayerDiv.classList.add('col');
//             PlayerDiv.innerHTML = `
//                 <div class="card">
//                     <img src="${player.strThumb}" class="card-img-top p-4" alt="${player.strPlayer}">
//                     <div class="card-body">
//                         <h5 class="card-title">${player.strPlayer}</h5>
//                         <p class="card-text">This is a longer card with supporting text below as a natural lead-in to additional content.</p>
//                         <button onclick="loadPlayerDetails('${player.idPlayer}')" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#PlayerDetailModal">Show Details</button>
//                     </div>
//                 </div>`;
//             PlayersContainer.appendChild(PlayerDiv);
//         });
//     }
    


//     toggleSpinner(false);
// };

// const processSearch = (dataLimit) => {
//     toggleSpinner(true);
//     const searchField = document.getElementById('search-field');
//     const searchText = searchField.value.trim();
//     loadPlayers(searchText, dataLimit);
// };

// document.getElementById('btn-search').addEventListener('click', function () {
//     processSearch(6);
// });

// document.getElementById('search-field').addEventListener('keypress', function (event) {
//     if (event.key === 'Enter') {
//         processSearch(6);
//     }
// });

// document.getElementById('btn-show-all').addEventListener('click', function () {
//     processSearch();
// });

// const toggleSpinner = isLoading => {
//     const loaderSection = document.getElementById('loader');
//     if (isLoading) {
//         loaderSection.classList.remove('d-none');
//     } else {
//         loaderSection.classList.add('d-none');
//     }
// };

// const loadPlayerDetails = async (id) => {
//     const url = `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`;
//     const res = await fetch(url);
//     const data = await res.json();
//     displayPlayerDetails(data.Players[0]);
// };

// const displayPlayerDetails = Player => {
//     const modalTitle = document.getElementById('PlayerDetailModalLabel');
//     modalTitle.innerText = player.strPlayer;

//     const PlayerDetails = document.getElementById('Player-details');
//     PlayerDetails.innerHTML = `
//         <img src="${player.strThumb}" class="img-fluid mb-3" alt="${player.strPlayer}">
//         <p><strong>Category:</strong> ${player.strCategory}</p>
//         <p><strong>Area:</strong> ${player.strArea}</p>
//         <p>${player.strInstructions}</p>`;
// };

// const loadPlayers = async (searchText, dataLimit) => {
//     const url = `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchText}`;
//     const res = await fetch(url);
//     const data = await res.json();
//     displayPlayers(data.player, dataLimit); // Use 'player' (corrected)
// };

// const displayPlayers = (players, dataLimit) => {
//     const playersContainer = document.getElementById('Players-container');
//     playersContainer.textContent = ''; // Clear the container

//     const showAll = document.getElementById('show-all');
//     if (dataLimit && players.length > 6) {
//         players = players.slice(0, 6);
//         showAll.classList.remove('d-none');
//     } else {
//         showAll.classList.add('d-none');
//     }

//     const noPlayerMessage = document.getElementById('no-found-message');
//     if (!players || players.length === 0) {
//         noPlayerMessage.classList.remove('d-none');
//     } else {
//         noPlayerMessage.classList.add('d-none');
//         players.forEach(Player => {
//             const playerDiv = document.createElement('div');
//             playerDiv.classList.add('col');
//             playerDiv.innerHTML = `
//                 <div class="card">
//                     <img src="${Player.strThumb}" class="card-img-top p-4" alt="${Player.strPlayer}">
//                     <div class="card-body">
//                         <h5 class="card-title">${Player.strPlayer}</h5>
//                         <p class="card-text">Position: ${Player.strPosition}</p>
//                         <button onclick="loadPlayerDetails('${Player.idPlayer}')" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#PlayerDetailModal">Show Details</button>
//                     </div>
//                 </div>`;
//             playersContainer.appendChild(playerDiv);
//         });
//     }

//     toggleSpinner(false);
// };

// const processSearch = (dataLimit) => {
//     toggleSpinner(true);
//     const searchField = document.getElementById('search-field');
//     const searchText = searchField.value.trim();
//     loadPlayers(searchText, dataLimit);
// };

// document.getElementById('btn-search').addEventListener('click', function () {
//     processSearch(6); // Limit the search results to 6 players
// });

// document.getElementById('search-field').addEventListener('keypress', function (event) {
//     if (event.key === 'Enter') {
//         processSearch(6);
//     }
// });

// document.getElementById('btn-show-all').addEventListener('click', function () {
//     processSearch(); // Show all players when 'Show All' is clicked
// });

// const toggleSpinner = isLoading => {
//     const loaderSection = document.getElementById('loader');
//     if (isLoading) {
//         loaderSection.classList.remove('d-none');
//     } else {
//         loaderSection.classList.add('d-none');
//     }
// };

// const loadPlayerDetails = async (id) => {
//     const url = `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`;
//     const res = await fetch(url);
//     const data = await res.json();
//     displayPlayerDetails(data.players[0]);
// };

// const displayPlayerDetails = Player => {
//     const modalTitle = document.getElementById('PlayerDetailModalLabel');
//     modalTitle.innerText = Player.strPlayer; // Display the player's name

//     const playerDetails = document.getElementById('Player-details');
//     playerDetails.innerHTML = `
//         <img src="${Player.strThumb}" class="img-fluid mb-3" alt="${Player.strPlayer}">
//         <p><strong>Nationality:</strong> ${Player.strNationality}</p>
//         <p><strong>Team:</strong> ${Player.strTeam}</p>
//         <p><strong>Position:</strong> ${Player.strPosition}</p>
//         <p><strong>Description:</strong> ${Player.strDescriptionEN}</p>`;
// };

const loadPlayers = async (searchText = '', dataLimit) => {
    const url = `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchText}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPlayers(data.player, dataLimit); // Display players
};

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
        players.forEach(Player => {
            const playerDiv = document.createElement('div');
            playerDiv.classList.add('col');
            playerDiv.innerHTML = `
                <div class="card">
                    <img src="${Player.strThumb}" class="card-img-top p-4" alt="${Player.strPlayer}">
                    <div class="card-body">
                        <h5 class="card-title">${Player.strPlayer}</h5>
                        <p class="card-text">Position: ${Player.strPosition}</p>
                        <button onclick="loadPlayerDetails('${Player.idPlayer}')" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#PlayerDetailModal">Show Details</button>
                    </div>
                </div>`;
            playersContainer.appendChild(playerDiv);
        });
    }

    toggleSpinner(false);
};

const processSearch = (dataLimit) => {
    toggleSpinner(true);
    const searchField = document.getElementById('search-field');
    const searchText = searchField.value.trim();
    loadPlayers(searchText, dataLimit);
};

document.getElementById('btn-search').addEventListener('click', function () {
    processSearch(6); // Limit search results to 6 players
});

document.getElementById('search-field').addEventListener('keypress', function (event) {
    if (event.key === 'Enter') {
        processSearch(6);
    }
});

document.getElementById('btn-show-all').addEventListener('click', function () {
    processSearch(); // Show all players when 'Show All' is clicked
});

const toggleSpinner = isLoading => {
    const loaderSection = document.getElementById('loader');
    if (isLoading) {
        loaderSection.classList.remove('d-none');
    } else {
        loaderSection.classList.add('d-none');
    }
};

const loadPlayerDetails = async (id) => {
    const url = `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPlayerDetails(data.players[0]);
};

const displayPlayerDetails = Player => {
    const modalTitle = document.getElementById('PlayerDetailModalLabel');
    modalTitle.innerText = Player.strPlayer;

    const playerDetails = document.getElementById('Player-details');
    playerDetails.innerHTML = `
        <img src="${Player.strThumb}" class="img-fluid mb-3" alt="${Player.strPlayer}">
        <p><strong>Nationality:</strong> ${Player.strNationality}</p>
        <p><strong>Team:</strong> ${Player.strTeam}</p>
        <p><strong>Position:</strong> ${Player.strPosition}</p>
        <p><strong>Description:</strong> ${Player.strDescriptionEN}</p>`;
};

// Show players by default when the page loads
window.onload = () => {
    toggleSpinner(true);
    loadPlayers('c', 9); // Default search for 'a' with a limit of 6
};