//Function Declaration 
function greet(name){
    return `Hello, ${name}`;
}

console.log(greet('Utsav Raj'));


//Function Expression
const add = function(a,b){
    return a+b;
};

console.log(add(5,6));


//Arrow Function
const multiply = (a,b) =>{
    return a*b;
}

console.log(multiply(5,3))

//parameter and arguments and default values
const calculateTotal = (price,taxRate=0.18) => {
    return price + price * taxRate;
} 

console.log(calculateTotal(1000));
console.log(calculateTotal(1000, 0.05));

//callback function
function processUser(name, callback) {
  console.log(`Processing ${name}...`);
  callback();
}

processUser("Rohan", () => {
  console.log("Done!");
});
