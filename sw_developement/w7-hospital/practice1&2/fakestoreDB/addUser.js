// const addUser = () => {
//     // Get input values
//     const firstname = document.getElementById('firstname').value;
//     const lastname = document.getElementById('lastname').value;
//     const email = document.getElementById('email').value;
//     const username = document.getElementById('username').value;
//     const password = document.getElementById('password').value;
//     const city = document.getElementById('city').value;
//     const street = document.getElementById('street').value;
//     const number = document.getElementById('number').value;
//     const zipcode = document.getElementById('zipcode').value;
//     const phone = document.getElementById('phone').value;
  
//     // Validate fields
//     if (!firstname || !lastname || !email || !username || !password || !city || !street || !number || !zipcode || !phone) {
//       alert('Please fill in all fields.');
//       return;
//     }
  
//     // Prepare user object
//     const user = {
//       email,
//       username,
//       password,
//       name: { firstname, lastname },
//       address: {
//         city,
//         street,
//         number: parseInt(number),
//         zipcode,
//         geolocation: { lat: '0.0', long: '0.0' }, // Default geolocation
//       },
//       phone,
//     };
  
//     // Send POST request to the API
//     fetch('https://fakestoreapi.com/users', {
//         method: 'POST',
//         headers: { 'Content-Type': 'application/json' },
//         body: JSON.stringify(user),
//       })
//         .then((res) => {
//           console.log('Response Status:', res.status); // Log the status
//           if (!res.ok) throw new Error(`Error: ${res.status}`);
//           return res.json();
//         })
//         .then((newUser) => {
//           console.log('New User Added:', newUser); // Log the API response
//           document.getElementById('response-message').innerHTML = `<strong>New User Added:</strong> ${newUser.name.firstname} ${newUser.name.lastname}`;
//           document.getElementById('add-user-form').reset();
//         })
//         .catch((error) => {
//           console.error('Error adding user:', error);
//           alert('Failed to add user. Please try again.');
//         });
      
//   };
  
// const addUser = () => {
//     // Get input values
//     const firstname = document.getElementById("firstname").value;
//     const lastname = document.getElementById("lastname").value;
//     const email = document.getElementById("email").value;
//     const username = document.getElementById("username").value;
//     const password = document.getElementById("password").value;
//     const city = document.getElementById("city").value;
//     const street = document.getElementById("street").value;
//     const number = document.getElementById("number").value;
//     const zipcode = document.getElementById("zipcode").value;
//     const phone = document.getElementById("phone").value;
  
//     // Validate fields
//     if (
//       !firstname ||
//       !lastname ||
//       !email ||
//       !username ||
//       !password ||
//       !city ||
//       !street ||
//       !number ||
//       !zipcode ||
//       !phone
//     ) {
//       alert("Please fill in all fields.");
//       return;
//     }
  
//     // Prepare user object
//     const user = {
//       email,
//       username,
//       password,
//       name: { firstname, lastname },
//       address: {
//         city,
//         street,
//         number: parseInt(number),
//         zipcode,
//         geolocation: { lat: "0.0", long: "0.0" }, // Default geolocation
//       },
//       phone,
//     };
  
//     // Send POST request to the API
//     fetch("https://fakestoreapi.com/users", {
//       method: "POST",
//       headers: { "Content-Type": "application/json" },
//       body: JSON.stringify(user),
//     })
//       .then((res) => {
//         console.log("Response Status:", res.status); // Log the status
//         if (!res.ok) throw new Error(`Error: ${res.status}`);
//         return res.json();
//       })
//       .then((newUser) => {
//         console.log("New User Added:", newUser); // Log the API response
  
//         // Display success message
//         document.getElementById("response-message").innerHTML =
//           `<strong>New User Added:</strong> ${newUser.name.firstname} ${newUser.name.lastname}`;
  
//         // Show the new user details below the form
//         const userDetailsSection = document.getElementById("new-user-details");
//         userDetailsSection.innerHTML = `
//           <h3>New User Information</h3>
//           <p><strong>Name:</strong> ${newUser.name.firstname} ${newUser.name.lastname}</p>
//           <p><strong>Email:</strong> ${newUser.email}</p>
//           <p><strong>Username:</strong> ${newUser.username}</p>
//           <p><strong>Address:</strong> ${newUser.address.street}, ${newUser.address.city}, ${newUser.address.zipcode}</p>
//           <p><strong>Phone:</strong> ${newUser.phone}</p>
//         `;
  
//         // Reset the form
//         document.getElementById("add-user-form").reset();
//       })
//       .catch((error) => {
//         console.error("Error adding user:", error);
//         alert("Failed to add user. Please try again.");
//       });
//   };
  
const addUser = () => {
    // Get input values
    const firstname = document.getElementById("firstname").value;
    const lastname = document.getElementById("lastname").value;
    const email = document.getElementById("email").value;
    const username = document.getElementById("username").value;
    const password = document.getElementById("password").value;
    const city = document.getElementById("city").value;
    const street = document.getElementById("street").value;
    const number = document.getElementById("number").value;
    const zipcode = document.getElementById("zipcode").value;
    const phone = document.getElementById("phone").value;
  
    // Validate fields
    if (
      !firstname ||
      !lastname ||
      !email ||
      !username ||
      !password ||
      !city ||
      !street ||
      !number ||
      !zipcode ||
      !phone
    ) {
      alert("Please fill in all fields.");
      return;
    }
  
    // Prepare user object
    const user = {
      email,
      username,
      password,
      name: { firstname, lastname },
      address: {
        city,
        street,
        number: parseInt(number),
        zipcode,
        geolocation: { lat: "0.0", long: "0.0" }, // Default geolocation
      },
      phone,
    };
  
    // Send POST request to the API
    fetch("https://fakestoreapi.com/users", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(user),
    })
      .then((res) => {
        console.log("Response Status:", res.status); // Log the status
        if (!res.ok) throw new Error(`Error: ${res.status}`);
        return res.json();
      })
      .then((newUser) => {
        console.log("New User Added:", newUser); // Log the API response
  
        // Check if the newUser object has the required structure
        if (!newUser || !newUser.name) {
          alert("User data is incomplete.");
          return;
        }
  
        // Display success message
        document.getElementById("response-message").innerHTML =
          `<strong>New User Added:</strong> ${newUser.name.firstname} ${newUser.name.lastname}`;
  
        // Show the new user details below the form
        const userDetailsSection = document.getElementById("new-user-details");
        userDetailsSection.innerHTML = `
          <h3>New User Information</h3>
          <p><strong>Name:</strong> ${newUser.name.firstname} ${newUser.name.lastname}</p>
          <p><strong>Email:</strong> ${newUser.email}</p>
          <p><strong>Username:</strong> ${newUser.username}</p>
          <p><strong>Address:</strong> ${newUser.address.street}, ${newUser.address.city}, ${newUser.address.zipcode}</p>
          <p><strong>Phone:</strong> ${newUser.phone}</p>
        `;
  
        // Reset the form
        document.getElementById("add-user-form").reset();
      })
      .catch((error) => {
        console.error("Error adding user:", error);
        alert("Failed to add user. Please try again.");
      });
  };
  