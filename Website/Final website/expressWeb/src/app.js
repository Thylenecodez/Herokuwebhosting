
const express = require('express');
const app = express();
const port = process.env.PORT || 8000;

app.get("", (req, res)=> {
    res.send("Welcome to Lakshay Codez")
})

app.listen(port , ()=> {
    console.log('listening to the port at ${port}')
})