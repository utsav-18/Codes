let a = 10;
let b = 4;

console.log(a+b);
console.log(a-b);
console.log(a*b);
console.log(a/b);

console.log(a%b);
console.log(a**b);

console.log(10 === 10);   // true
console.log(10 === "10"); // false (different types)
console.log(10 > 5);      // true


console.log(a++,++a);
console.log(b--,--b);


//Logical Operators
const isLoggedIn = true;
const isAdmin = false;

console.log(isLoggedIn && isAdmin); // false
console.log(isLoggedIn || isAdmin); // true
console.log(!isLoggedIn);           // false

//Ternary Operator
const age = 20;
const status = age >= 18 ? "Adult" : "Minor"; // "Adult"

//Nullish Coalescing
let username = null;
console.log(username ?? "Guest"); // "Guest"


