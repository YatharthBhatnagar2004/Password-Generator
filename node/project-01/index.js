const express = require("express")
const {connectMongoDB}=require("./connection")

const app = express();
const PORT = 8000;

const userRouter=require("./routes/user")

const {logReqRes}=require("./middlewares/middleware")

connectMongoDB("mongodb://localhost:27017/project-01").then(()=>console.log("MongoDB connected successfully!!!!!"))

// middleware
app.use(express.urlencoded({ extended: false }))
app.use("/users",userRouter);
app.use(logReqRes("logs.txt"))




app.listen(PORT, () => console.log("Server Started!!!!"));
