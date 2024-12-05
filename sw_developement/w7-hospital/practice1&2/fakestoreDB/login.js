const handleLogin = (event) => {
    event.preventDefault(); // Prevent form submission
  
    // Get the username and password from input fields
    const username = document.getElementById("username").value;
    const password = document.getElementById("password").value;
  
    // Validate the inputs
    if (!username || !password) {
      document.getElementById("login-message").innerHTML =
        "<p class='text-danger'>Please fill in all fields.</p>";
      return;
    }
  
    // Make the API call
    fetch("https://fakestoreapi.com/auth/login", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({
        username: username,
        password: password,
      }),
    })
      .then((res) => {
        if (!res.ok) throw new Error("Login failed");
        return res.json();
      })
      .then((data) => {
        console.log("Login successful:", data);
  
        // Show a success message
        document.getElementById("login-message").innerHTML =
          "<p class='text-success'>Login successful! Token: " + data.token + "</p>";
  
        // Optionally store the token in localStorage
        localStorage.setItem("authToken", data.token);
      })
      .catch((error) => {
        console.error("Error during login:", error);
        document.getElementById("login-message").innerHTML =
          "<p class='text-danger'>Login failed. Please check your credentials.</p>";
      });
  };
  