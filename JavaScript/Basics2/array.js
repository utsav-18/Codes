arr = [1,2,3,4,5];
var n = arr.length;

for(const ele of arr){
    console.log(ele);
}

console.log(n);

const tasks = ["Code", "Test"];
tasks.push("Deploy"); // ["Code", "Test", "Deploy"]
tasks.pop();          // ["Code", "Test"]


const scores = [60,65,70,75,80,85,90, 180, 270];
const passing = scores.filter(score => score >= 75);
console.log(passing); // [82, 91]


brr = [3,7,6,8,0,2];
brr.forEach((ele,i)=>{
    // ele*=2; //it will not change 
     console.log(ele,i);
})

// console.log(brr);