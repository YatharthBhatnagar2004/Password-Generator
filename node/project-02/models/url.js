const mongoose = require("mongoose");
const urlSchema = new mongoose.Schema({
    shortId: {
        type: String,
        required: true,
        unique: true,
    },
    redirectedUrl: {
        type: String,
        required: true,
    },
    visitHistory: [{ timestamp: { type: Number } }]
}, { timestamps: true })
const URL = mongoose.model("user", urlSchema)
module.exports = (URL);