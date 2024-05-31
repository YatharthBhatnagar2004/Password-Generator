const express = require("express")
const router = express.Router();
const { handleGetAllDbUsers, handleChangeUserById, handleDeleteUserById, handleAddUsers, handleGetAllDbUsersById } = require("../controllers/user")

// router.get("/", (req, res) => {
//     res.end("HOMEPAGE");
// })
router.get("/", handleGetAllDbUsers)
// router.get("/users", async (req, res) => {
//     const allDBUsers = await User.find({});
//     const HTML = `
//     <ul>
//         ${allDBUsers.map((allDBUsers) =>
//         `
//                 <li>User ${allDBUsers.id}: </li>
//                 <br>${allDBUsers.firstName} ${allDBUsers.lastName}</br>
//                 <br>${allDBUsers.email}</br>
//                 <br>${allDBUsers.gender}</br>
//                 <br>${allDBUsers.jobTitle}</br>
//                 `
//     ).join("")}
//             </ul>
//             `
//     res.send(HTML);
// })
router.get("/:id",handleGetAllDbUsersById)
router
    .route("/:id")
    // .get(async (req, res) => {
    //     const id = (req.params.id);
    //     const user = await User.findById(id)
    //     const HTML = `
    // <ul>
    // <li>User ${user.id}: </li>
    // <br>${user.firstName} ${user.lastName}</br>
    // <br>${user.email}</br>
    // <br>${user.gender}</br>
    // <br>${user.jobTitle}</br>
    // </ul >
    // `
    //     res.send(HTML)
    // })
    .patch(handleChangeUserById)
    .delete(handleDeleteUserById)
router.post("/", handleAddUsers)
module.exports = (router);