const fs = require("fs");
// custom Middle ware
function logReqRes(fileName) {
    return ((req, res, next) => {
        fs.appendFile(fileName, `${Date.now()}: ${req.method}: ${req.path}\n`, (err, data) => {
            next();
        })
    })
}
module.exports={
    logReqRes,
};
// app.use((req, res, next) => {
//     console.log("middleware 1 activated")
//     next()
//     // return res.json({msg:"Midlleware 1"})
// })