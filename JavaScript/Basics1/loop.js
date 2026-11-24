// for(let i=1;i<10;i++){
//     console.log(i);
// }

// let i=0;
// while(i<=10){
//     console.log(i);
//     i++;
// }

// let j=10;
// do{
//     console.log(j);
//     j++;
// }
// while(j<5);

const fruits = ["Apple", "Banana", "Mango"];

for (const fruit of fruits){
    console.log(fruit);
}

const user = {Name : 'Utsav Raj' , Role : 'Developer', City : 'Bengaluru'};
for (const key in user){
    console.log(`${key} : ${user[key]}`);
}