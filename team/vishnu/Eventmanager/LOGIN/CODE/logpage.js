// const form = document.getElementById('frm1');
// form.addEventListener('submit', event => {
//   event.preventDefault();
//   const username = document.getElementById('username').value;
//   const password = document.getElementById('password').value;

//   // Check if the username and password match with the registered user's credentials
//   const registeredUsers = [
//     { username: 'kmit@gmail.com', password: '1234' },
//     // { username: 'user2', password: 'password2' },
//     // Add additional registered users here
//   ];
//   const user = registeredUsers.find(u => u.username === username && u.password === password);
//   if (user) {
//     // If the username and password match, redirect the user to the protected page
//     window.location.href = "http://127.0.0.1:3000/HOME/CODE/index.html";
//   } else {
//     // If the username and password do not match, show an error message
//     alert('Incorrect username or password. Please try again.');
//   }
// });
document.getElementById("showpassword").onclick = function() {
  if ( this.checked ) {
     document.getElementById("floatingPassword").type = "text";
  } else {
     document.getElementById("floatingPassword").type = "floatingPassword";
  }
};