const getparams = () => {
  const param = new URLSearchParams(window.location.search).get("doctorId");
  
  fetch(`https://fakestoreapi.com/products/${param}`)
    .then((res) => res.json())
    .then((data) => displayDetails(data));

};

const displayDetails = (doctor) => {
  console.log(doctor);
  const parent = document.getElementById("doc-details");
  const div = document.createElement("div");
  div.classList.add("doc-details-container");
  div.innerHTML = `
    <div class="doctor-img">
    <img src=${doctor.image} alt="" />
  </div>
  <div class="doc-info">
    <h1>${doctor.title} </h1>
    <p class="w-50">
      ${doctor.description}
    </p>

    <h4>Fees: ${doctor.price} BDT</h4>
    <button
    type="button"
    class="btn btn-primary"
    
  >
   Buy
  </button>
  </div>
    `;
  parent.appendChild(div);
};

getparams();
