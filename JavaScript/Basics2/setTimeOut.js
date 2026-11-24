// function hello(){
//     console.log('Hello');
// }

// function world(){
//     console.log('World');
// }


// setTimeout(hello, 2*1000);
// setTimeout(world, 3*1000);


function sidha() {
    for (let i = 1; i <= 10; i++) {
        setTimeout(function () {
            console.log(i);
        }, i * 500);
    }
}

function ulta() {
    for (let i = 1; i <= 10; i++) {
        setTimeout(function () {
            console.log(11 - i);
        }, i * 500);
    }
}

sidha();

// Start ulta after sidha completes (10 seconds)
setTimeout(ulta, 11000);
