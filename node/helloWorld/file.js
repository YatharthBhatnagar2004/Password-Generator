const fs = require("fs");

// synchronous call
fs.writeFileSync("./math2.js","function add(a,b){return a+b;}")

// Async

// fs.writeFile("./test.txt","hello there",(err)=>{})

// READ FILE
// SYNC
// const result=fs.readFileSync("./test.txt","utf-8")
// console.log(result);

//Async
// fs.readFile("./test.txt","utf-8",(err,result)=>{
//     if(err){
//         console.log("Error",err);
//     }else{
//         console.log(result)
//     }
// });

// append

fs.appendFileSync("./test.txt",`${Date.now()} Hey there\n`)
const os=require("os")
console.log(os.cpus().length)