// alert()



const loadAllProduct = ()=>{
    fetch('https://fakestoreapi.com/products')
            .then(res=>res.json())
            .then(data=>{
                // console.log(data)
                displayProduct(data)
            })
}



const displayProduct =(products)=>{
    const productContainer = document.getElementById("productContainer");

    products.forEach(product => {
        // console.log(product)
        const div = document.createElement("div");

        div.classList.add("card");

        div.innerHTML=`
            <img class ="cardImg" src=${product.image} alt="" />
            <h5>${product.title.slice(0, 30)}</h5>
            <h3>${product.price}</h3>
            <p>${product.description.slice(0,100)}</p>
            
            <button onclick="singleProduct('${product.id}')">Details</button>
            <button onclick="handleAddToCart('${product.title}','${product.price} ')" >Add to cart</button>
        `;
        productContainer.appendChild(div);
    });

}

const handleAddToCart =(name, price)=>{
    // console.log(name, price)
    const cartCount = document.getElementById("count").innerText;

    let convertedCount = parseInt(cartCount);

    convertedCount = convertedCount +1;
    document.getElementById("count").innerText = convertedCount;
    // console.log(convertedCount);
    const container = document.getElementById("cartMainContainer");
    const div = document.createElement("div")
    div.classList.add("cartInfo");

    div.innerHTML = `
    <p>${name.slice(0,10)}</p>
    <h3 class="price">${price}</h3>

    `
    container.appendChild(div);
    updateTotal();
};

const updateTotal = ()=>{
    const allPrice = document.getElementsByClassName("price");
    let count = 0;
    for(const element of allPrice){
        count = count+ parseFloat(element.innerText);
    }
    document.getElementById("total").innerText = count.toFixed(2);
};



const singleProduct =(id)=>{
    console.log(id);
    fetch(`https://fakestoreapi.com/products/${id}`)
            .then(res=>res.json())
            .then(json=>console.log(json));
};



loadAllProduct()