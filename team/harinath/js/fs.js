const fs = require('fs');
// const d=fs.readFileSync('ind.html');
// console.log(d.toString())
// // console.log("eddie")
fs.writeFile('f.txt','eddie is a eddie',()=>{
    console.log("finished")
});
// const b=fs.writeFileSync('f.txt','eddie is a eddie2')
// console.log(b)
console.log("eddie")