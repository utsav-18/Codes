if(true){
    var a = 'I leak Outside';
    let b = 'I stay inside';
    const c = 'I also stay inside';
}

console.log(a);
// console.log(b); // ReferenceError: b is not defined
// console.log(c); // ReferenceError: c is not defined