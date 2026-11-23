// --- var ---
var city = "Bengaluru";
var city = "Mumbai"; // Allowed: can be redeclared
city = "Delhi";      // Allowed: can be reassigned
console.log(city);   // Output: "Delhi"

// --- let ---
let score = 10;
// let score = 20;   // SyntaxError: Identifier 'score' has already been declared
score = 20;          // Allowed: can be reassigned
console.log(score);  // Output: 20

// --- const ---
const country = "India";
// country = "Japan"; // TypeError: Assignment to constant variable
console.log(country); // Output: "India"
