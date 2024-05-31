const URL = require("../models/url")
const shortid = require("shortid")
async function handleGenerateNewShortUrl(req, res) {
    const body = req.body;
    if (!body.url) return res.status(400).json({ error: "url is required" });
    const shortUrl = shortid();
    await URL.create({
        shortId: shortUrl,
        redirectedUrl: body.url,
        visitHistory: [],
    })
    return res.json({ id: shortUrl })
}
module.exports = {
    handleGenerateNewShortUrl,
}