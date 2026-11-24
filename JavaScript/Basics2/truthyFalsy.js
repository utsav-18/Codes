const username = "";

if (username) {
  console.log(`Welcome back, ${username}!`);
} else {
  console.log("Please enter your name."); // Runs because "" is falsy
}


const inputName = "";
const displayName = inputName || "Guest"; 
console.log(displayName); // "Guest"
