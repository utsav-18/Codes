const developer = {
    name : 'Utsav',
    role : 'Associate Software Developer',
    skills : ["Big Data", "Machine Learning " , "AI"],
    isEmployed : true
};

console.log(developer.name);

console.log(developer['role']);
const prop = 'isEmployed';
console.log(developer[prop]);


//Object Method and the This keyword : 
const user = {
  firstName: "Meera",
  lastName: "Nair",
    getFullName(){
        return `${this.firstName} ${this.lastName}`;
    }
};

console.log(user.getFullName());


//Spread Operator 
const baseConfig = { theme: "dark", notifications: true };
const userConfig = { ...baseConfig, theme: "light" }; // { theme: "light", notifications: true }


//Optional Chaining (?.):
const employee = { name: "Asha" };
console.log(employee.address?.city); // undefined (instead of throwing a TypeError)

