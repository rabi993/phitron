const getUserById = () => {
    // Get the ID entered by the user
    const userId = document.getElementById('user-id-input').value;
  
    // Validate the input
    if (!userId) {
      alert('Please enter a valid User ID');
      return;
    }
  
    // Fetch the user by ID
    fetch(`https://fakestoreapi.com/users/${userId}`)
      .then((res) => {
        if (!res.ok) throw new Error('User not found');
        return res.json();
      })
      .then((user) => {
        // Display the user details
        displayUserDetails(user);
      })
      .catch((error) => {
        console.error('Error fetching user:', error);
        document.getElementById('user-details').innerHTML =
          `<p class="text-danger">User not found. Please try again.</p>`;
      });
  };
  
  const displayUserDetails = (user) => {
    const userDetails = document.getElementById('user-detail');
    userDetails.innerHTML = `
      <h3>User Details</h3>
      <p><strong>Name:</strong> ${user.name.firstname} ${user.name.lastname}</p>
      <p><strong>Email:</strong> ${user.email}</p>
      <p><strong>Username:</strong> ${user.username}</p>
      <p><strong>Address:</strong> ${user.address.street}, ${user.address.city}, ${user.address.zipcode}</p>
      <p><strong>Phone:</strong> ${user.phone}</p>
    `;
  };
  