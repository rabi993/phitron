// const loadmeals = async (searchText, dataLimit) => {
//     const url = `https://www.themealdb.com/api/json/v1/1/search.php?f=${searchText}`
//     const res = await fetch(url);
//     const data = await res.json();
//     // console.log(data);
//     displaymeals(data.meals, dataLimit);
// }

// const displaymeals = (meals, dataLimit) => {
//     const mealsContainer = document.getElementById('meals-container');
//     mealsContainer.textContent = '';
//     //display 6 meal only
//     // meals =meals.slice(0, 6);
//     const showAll = document.getElementById('show-all');
//     if (dataLimit && meals.length > 6) {
//         meals = meals.slice(0, 6);
//         showAll.classList.remove('d-none');
//     }
//     else {
//         showAll.classList.add('d-none');
//     }

//     //display no meal found
//     const nomeal = document.getElementById('no-found-message');
//     if (meals.length === 0) {
//         nomeal.classList.remove('d-none');
//     }
//     else {
//         nomeal.classList.add('d-none');
//     }
//     //display all meals
//     meals.forEach(meal => {
//         const mealDiv = document.createElement('div');
//         mealDiv.classList.add('col');
//         mealDiv.innerHTML = `
//         <div class="card ">
//                         <img src="${meal.strMealThumb}" class="card-img-top p-4" alt="...">
//                         <div class="card-body">
//                           <h5 class="card-title">${meal.strMeal}</h5>
//                           <p class="card-text">This is a longer card with supporting text below as a natural lead-in to additional content. This content is a little bit longer.</p>
//                           <button onclick = "loadmealDetails('${meal.idMeal}')" href="#" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#mealDetailModal">Show Details</button>
                          
//                         </div>
//                       </div>
//         `;
//         mealsContainer.appendChild(mealDiv);

//     })
//     //stop Spinner or loader
//     toggleSpinner(false);
// }

// const processSearch = (dataLimit) => {
//     toggleSpinner(true);
//     const searchField = document.getElementById('search-field');
//     const searchText = searchField.value;
//     loadmeals(searchText, dataLimit);
// }

// //handle search button click
// document.getElementById('btn-search').addEventListener('click', function () {
//     //start loader
//     // toggleSpinner(true);
//     // const searchField =document.getElementById('search-field');
//     // const searchText = searchField.value;
//     // loadmeals(searchText);
//     processSearch(6);
// })

// // search input field enter key handler
// document.getElementById('search-field').addEventListener('keypress', function (event) {
//     if (event.key === 'Enter') {
//         //code for enter
//         processSearch(6);
//     }
// })

// const toggleSpinner = isLoading => {
//     const loaderSection = document.getElementById('loader');
//     if (isLoading) {
//         loaderSection.classList.remove('d-none');

//     }
//     else {
//         loaderSection.classList.add('d-none');
//     }

// }
// //not the best way to show all
// document.getElementById('btn-show-all').addEventListener('click', function () {
//     processSearch();


// })

// const loadmealDetails = async (id) => {
//     const url = `www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`;
//     const res = await fetch(url);
//     const data = await res.json();
//     displaymealDetails(data.meals);

// }

// const displaymealDetails = meal => {
//     console.log(meal);
//     const modalTitle = document.getElementById('mealDetailModalLabel');
//     modalTitle.innerText = meal.strMeal;
//     const mealDetails = document.getElementById('meal-details');
//     mealDetails.innerHTML = `
//     <img src="${meal.strMealThumb}" class="card-img-top p-4" alt="...">
//     <div class="card-body">
//     <h5 class="card-title">${meal.strMeal}</h5>
//     <p class="card-text">This is a longer card with supporting text below as a natural lead-in to additional content. This content is a little bit longer.</p>
//     <p>desc:${meal.strMeal ? phone.releaseDate : 'No releaseDate found'} </p> 
    
//     `;
// }

// //  loadmeals("a");


const loadmeals = async (searchText, dataLimit) => {
    const url = `https://www.themealdb.com/api/json/v1/1/search.php?s=${searchText}`;
    const res = await fetch(url);
    const data = await res.json();
    displaymeals(data.meals, dataLimit);
};

const displaymeals = (meals, dataLimit) => {
    const mealsContainer = document.getElementById('meals-container');
    mealsContainer.textContent = '';
    
    const showAll = document.getElementById('show-all');
    if (dataLimit && meals.length > 6) {
        meals = meals.slice(0, 6);
        showAll.classList.remove('d-none');
    } else {
        showAll.classList.add('d-none');
    }

    const nomeal = document.getElementById('no-found-message');
    if (!meals || meals.length === 0) {
        nomeal.classList.remove('d-none');
    } else {
        nomeal.classList.add('d-none');
        meals.forEach(meal => {
            const mealDiv = document.createElement('div');
            mealDiv.classList.add('col');
            mealDiv.innerHTML = `
                <div class="card">
                    <img src="${meal.strMealThumb}" class="card-img-top p-4" alt="${meal.strMeal}">
                    <div class="card-body">
                        <h5 class="card-title">${meal.strMeal}</h5>
                        <p class="card-text">This is a longer card with supporting text below as a natural lead-in to additional content.</p>
                        <button onclick="loadmealDetails('${meal.idMeal}')" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#mealDetailModal">Show Details</button>
                    </div>
                </div>`;
            mealsContainer.appendChild(mealDiv);
        });
    }
    


    toggleSpinner(false);
};

const processSearch = (dataLimit) => {
    toggleSpinner(true);
    const searchField = document.getElementById('search-field');
    const searchText = searchField.value.trim();
    loadmeals(searchText, dataLimit);
};

document.getElementById('btn-search').addEventListener('click', function () {
    processSearch(6);
});

document.getElementById('search-field').addEventListener('keypress', function (event) {
    if (event.key === 'Enter') {
        processSearch(6);
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

const loadmealDetails = async (id) => {
    const url = `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displaymealDetails(data.meals[0]);
};

const displaymealDetails = meal => {
    const modalTitle = document.getElementById('mealDetailModalLabel');
    modalTitle.innerText = meal.strMeal;

    const mealDetails = document.getElementById('meal-details');
    mealDetails.innerHTML = `
        <img src="${meal.strMealThumb}" class="img-fluid mb-3" alt="${meal.strMeal}">
        <p><strong>Category:</strong> ${meal.strCategory}</p>
        <p><strong>Area:</strong> ${meal.strArea}</p>
        <p>${meal.strInstructions}</p>`;
};
