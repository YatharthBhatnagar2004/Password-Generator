const User = require("../models/user")

async function handleGetAllDbUsers(req, res) {
    const allDBUsers = await User.find({});
    //custom header
    res.setHeader("X-myName", "Yatherth Bhatnagar")
    return res.json(allDBUsers)
}

async function handleGetAllDbUsersById(req, res) {
    const id = req.params.id;
    const DBUser = await User.findById(id)
    return res.json(DBUser);
}

async function handleChangeUserById(req, res) {
    const id = (req.params.id);
    const body = req.body;
    await User.findByIdAndUpdate(id, { firstName: body.first_name, lastName: body.last_name, email: body.email, jobTitle: body.job_title, gender: body.gender })
    res.status(200).json({ msg: "sucessfully updated", user: await User.findById(id) })
}

async function handleDeleteUserById(req, res) {
    const id = (req.params.id);
    await User.findByIdAndDelete(id);
    res.status(200).json({ msg: "sucessfully deleted" })
}

async function handleAddUsers(req, res) {
    const body = req.body;
    if (!body || !body.first_name || !body.last_name || !body.email || !body.gender || !body.job_title) {
        return res.status(400).json({ msg: "All feilds required" });
    }
    const result = await User.create({
        firstName: body.first_name,
        lastName: body.last_name,
        email: body.email,
        jobTitle: body.job_title,
        gender: body.gender,
    })
    return res.status(201).json({ msg: "Success!!" });
}
module.exports = {
    handleGetAllDbUsers,
    handleGetAllDbUsersById,
    handleChangeUserById,
    handleDeleteUserById,
    handleAddUsers,
};