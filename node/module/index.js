const http = require("http")
const fs = require("fs")
const url=require("url")

const myServer = http.createServer((req, res) => {
    if(req.url==="/favicon.ico") return res.end();
    const myUrl=url.parse(req.url,true);
    const log = `${Date.now()}: ${req.url} : ${req.method}New req Recieved\n`;
    fs.appendFile("logs.txt", log, (err, data) => {
        switch(myUrl.pathname){
            case "/":
                if(req.method==="GET"){
                    res.end("HOMEPAGE");
                }
                break;
            case "/about":
                const username=myUrl.query.myname;
                res.end(`Hi, ${username}`);
                break;
            case "/search":
                const search=myUrl.query.search_query;
                res.end("Here are your results for "+ search);
            case "/signup":
                if(req.method==="GET"){
                    res.end("Fill the signup form");
                }
                if(req.method==="POST"){
                    // DB QUERY
                    res.end("success!!!!!");
                }
            default:
                res.end("404 NOT FOUND");
                break;
        }
    })
})
myServer.listen(8000, () => console.log("Server started"))