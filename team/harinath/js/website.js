const { Console }=require("console");
const http=require("http");
const port=process.env.PORT || 3000;
const server = http.createServer((req,res)=>{
    res.setHeader("Content-Type","text/html");
    console.log(req.url);
    if(req.url="/"){
        res.statusCode=200;
        res.end('<h1>this is amazing</h1> <p>this is a way to rock the world</p>');
    }
    else if(req.url="/about"){
        res.statusCode=200;
        res.end('<h1>about amazing</h1> <p>this is a way to rock the world</p>');
    }
    else{
        res.hari;
        res.statusCode=404;
        res.end('<h1>not found</h1> <p>this is a way to rock the world</p>');
    }

})
server.listen(port,()=>{
    console.log(`server is listening on port ${port}`);
});