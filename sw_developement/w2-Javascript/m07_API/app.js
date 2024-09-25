
// // alert()

// console.log(document.getElementsByTagName("h1"));

// const target = document.getElementsByClassName("title");
// console.log(target);
// const target1 = document.getElementById("title");
// console.log(target1);

// target1.style.color= "red";

// const allBox = document.getElementsByClassName("box");

// for(let i=0; i< allBox.length; i++){

//     const element = allBox[i];
//     console.log(element);
//     element.style.backgroundColor = "green";

//     if(element.innerText == "Box no 5"){
//         element.style.backgroundColor = "red";
//     }
// }

// document.getElementById("handleAdd").addEventListener("click", (event)=>{
//     console.log("Hello Box");
//     const inputValue = document.getElementById("searchBox").value;
//     console.log(inputValue)
// })

// const handleSearch = (event)=>{
//     console.log("Hello Boxxx");
// }

// const handleSearch = (event)=>{
//     const inputValue = document.getElementById("searchBox").value;
//     console.log(inputValue)

// }


document.getElementById("handleAdd").addEventListener("click", (event)=>{
        
        const inputValue = document.getElementById("searchBox").value;
        const container = document.getElementById("comment_container");

        const p = document.createElement("p");
        p.classList.add("child")
        p.innerText =inputValue;

        // console.log(p)
        container.appendChild(p)

        document.getElementById("searchBox").value ='';

        const allComments = document.getElementsByClassName("child");

        // console.log(allComments);
        for(const element of allComments){
           element.addEventListener("click",(e)=>{
            // console.log(e.target.parentNode)
            e.target.parentNode.removeChild(element);
           })
        }


    })






// const handleSearch = (event)=>{
//     const inputValue = document.getElementById("searchBox").value;
//     console.log(inputValue)
// const container = document.getElementById("comment_container");

//         const p = document.createElement("p");
//         p.innerText =inputValue;

//         // console.log(p)
//         container.appendChild(p)

//         document.getElementById("searchBox").value ='';

// }




fetch("https://jsonplaceholder.typicode.com/users")
.then(res => res.json())
.then(data => {
    // console.log(data);
    displayData(data)
})

.catch((err)=> {
    console.log(err);
});

const displayData =(userData)=> {
    const container = document.getElementById("userData-Container");
    
    userData.forEach(user => {
        // console.log(user);
        const div = document.createElement("div");
        div.classList.add("user");
        
        div.innerHTML =`
        <h4>title</h4>
        <p>Description</p>
        <button>Details</button>

        `;
        container.appendChild(div);
        
        
    });
}