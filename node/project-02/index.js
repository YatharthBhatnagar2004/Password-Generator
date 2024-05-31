const express = require("express");
const { connectMongoDB } = require("./connection");
const app = express();
const PORT = 8001
const urlRouter = require("./routes/url");
connectMongoDB("mongodb://localhost:27017/project-02").then(() => console.log("MongoDB connected successfully!!!!!"));
app.use(express.json())
app.use("/url", urlRouter);
app.listen(PORT, () => console.log("Server Started!!!!!"));

