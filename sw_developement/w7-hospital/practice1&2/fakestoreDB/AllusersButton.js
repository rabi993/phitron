const getAllUsers = () => {
    fetch('https://fakestoreapi.com/users')
      .then((res) => {
        if (!res.ok) throw new Error('Failed to fetch users');
        return res.json();
      })
      .then((users) => {
        const userList = document.getElementById('user-list');
        userList.innerHTML = ''; // Clear previous data
        users.forEach((user) => {
          const li = document.createElement('li');
          li.textContent = `Name: ${user.name.firstname} ${user.name.lastname} - Email: ${user.email}`;
          userList.appendChild(li);
        });
      })
      .catch((error) => console.error('Error fetching users:', error));
  };
  
 
  
