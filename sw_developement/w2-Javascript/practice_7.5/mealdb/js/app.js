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
    
    const nomeal = document.getElementById('no-found-message');
    
    toggleSpinner(false);
    if (!meals || meals.length === 0) {
        nomeal.classList.remove('d-none'); 
        showAll.classList.add('d-none'); 
        return;  
    } else {
        nomeal.classList.add('d-none');  
    }

    if (dataLimit && meals.length > 6) {
        meals = meals.slice(0, 6);
        showAll.classList.remove('d-none');  
    } else {
        showAll.classList.add('d-none');  
    }

    meals.forEach(meal => {
        const mealDiv = document.createElement('div');
        mealDiv.classList.add('col');
        mealDiv.innerHTML = `
            <div class="card" >
                <button onclick="loadmealDetails('${meal.idMeal}')" class="btn" data-bs-toggle="modal" data-bs-target="#mealDetailModal">
                <div>
                <img src="${meal.strMealThumb}" class="card-img-top p-4 im" alt="${meal.strMeal}">
                <div class="card-body">
                    <h5 class="card-title">${meal.strMeal}</h5>
                    
                </div>
                </button>
            </div>`;
        mealsContainer.appendChild(mealDiv);
    });
    
    
    
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

const toggleSpinner = isLoading => {
    const loaderSection = document.getElementById('loader');
    if (isLoading) {
        loaderSection.classList.remove('d-none');
    } else {
        loaderSection.classList.add('d-none');
    }
};
document.getElementById('btn-show-all').addEventListener('click', function () {
    processSearch();
});

const loadmealDetails = async (id) => {
    const url = `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displaymealDetails(data.meals[0]);
};

// const displaymealDetails = meal => {

//     const mealDetails = document.getElementById('meal-details');
//     mealDetails.classList.add('mod-body')


//     mealDetails.innerHTML = `
//         <img src="${meal.strMealThumb}" class="img-fluid mb-3" alt="${meal.strMeal}">
//         <h1><strong>${meal.strMeal}</strong></h1>
//         <hr>
//         <p><strong>Ingredients:</strong></p>
//         <p><strong>Area:</strong> ${meal.strArea}</p>
//         <p>${meal.strInstructions.slice(0,50)}</p>`;
        
// };
const displaymealDetails = meal => {
    const mealDetails = document.getElementById('meal-details');
    mealDetails.classList.add('mod-body');

    
    let ingredientList = '<ul>';
    for (let i = 1; i <= 20; i++) {
        const ingredient = meal[`strIngredient${i}`];
        const measure = meal[`strMeasure${i}`];
        if (ingredient) {
            ingredientList += `<li>${measure} ${ingredient}</li>`;
        }
    }
    ingredientList += '</ul>';

    mealDetails.innerHTML = `
        <img src="${meal.strMealThumb}" class="img-fluid mb-3" alt="${meal.strMeal}">
        <h1><strong>${meal.strMeal}</strong></h1>
        <hr>
        <p id="ing"><strong>Ingredients:</strong></p>
        ${ingredientList} 
        <p><strong>Area:</strong> ${meal.strArea}</p>
    `;
};


window.onload = () => {
    toggleSpinner(true);
    loadmeals('d', 9); 
};