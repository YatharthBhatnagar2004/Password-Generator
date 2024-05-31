
const express=require("express");

const app=express();
app.get("/",(req,res)=>{
    res.end("HOMEPAGE");
})
app.get("/about",(req,res)=>{
    res.end("ABOUT");
})
app.listen(8000,()=>console.log("Server Started!!"));
