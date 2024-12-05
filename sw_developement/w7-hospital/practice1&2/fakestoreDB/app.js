const loadProducts = () => {
  fetch("https://fakestoreapi.com/products")
    .then((res) => res.json())
    .then((data) => displayProduct(data))
    .catch((err) => console.log(err));
};

const displayProduct = (products) => {
  //   console.log(products);
  products.forEach((product) => {
    const parent = document.getElementById("pro-container");
    const li = document.createElement("li");
    li.innerHTML = `
      <div class="card shadow h-100">
                <div class="ratio ratio-16x9">
                  <img
                    src=${product.image}
                    class="card-img-top"
                    loading="lazy"
                    alt="..."
                  />
                </div>
                <div class="card-body p-3 p-xl-5">
                  <h3 class="card-title h5">${product.title}</h3>
                  <h6 class="card-title h5">${product.category}</h6>
                  <h6 class="card-title h5">${product.price}</h6>

                  <p class="card-text">
                    ${product.description.slice(0, 140)}
                  </p>
                  <a href="#" class="btn btn-primary">Details</a>
                </div>
              </div>
      `;
    parent.appendChild(li);
  });
};

const loadpros = (search) => {
  document.getElementById("doctors").innerHTML = "";
  document.getElementById("spinner").style.display = "block";

  fetch(`https://fakestoreapi.com/products/category/${search ? search : ""}`)
    .then((res) => res.json())
    .then((data) => {
      if (data.length > 0) {
        document.getElementById("spinner").style.display = "none";
        document.getElementById("nodata").style.display = "none";
        displyDoctors(data);
      } else {
        document.getElementById("spinner").style.display = "none";
        document.getElementById("nodata").style.display = "block";
      }
    })
    .catch((error) => {
      console.error("Error fetching data:", error);
      document.getElementById("spinner").style.display = "none";
      document.getElementById("nodata").style.display = "block";
    });
};

const displyDoctors = (doctors) => {
  const parent = document.getElementById("doctors");
  parent.innerHTML = "";
  
  doctors?.forEach((doctor) => {
    // console.log(doctor);
    const parent = document.getElementById("doctors");
    const div = document.createElement("div");
    div.classList.add("doc-card", "col-12", "col-md-6", "col-lg-3");
    div.innerHTML = `
        <img class="doc-img" src=${doctor.image} alt="" />
              <h4>${doctor?.title}</h4>
              <p>
                Lorem ipsum dolor sit amet consectetur adipisicing elit. Nobis, numquam!
              </p>
              <button > <a target="_blank" href="docDetails.html?doctorId=${
                doctor.id
              }">Details</a> </button>
        `;

    parent.appendChild(div);
  });
};

const loadCategory = () => {
  fetch("https://fakestoreapi.com/products/categories")
    .then((res) => res.json())
    .then((data) => {
      // const parent = document.getElementById("drop-deg");
      // parent.innerHTML = "";

      data.forEach((item) => {
        const parent = document.getElementById("drop-deg");
        const li = document.createElement("li");
        li.classList.add("dropdown-item");
        li.innerHTML = `<span onclick="loadpros('${item}')">${item}</span>`;
        parent.appendChild(li);
      });
    })
    .catch((error) => console.error("Error loading categories:", error));
};


const handleSearch = () => {
  const value = document.getElementById("search").value.trim();
  loadpros(value);
};



loadProducts();
loadpros();
loadCategory();
