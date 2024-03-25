import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App.jsx";
function MyApp() {
    return(
        <h1>my App</h1>
    )
}
const reactElement=React.createElement(
    'h1',
    {},
    'React element'
)
ReactDOM.createRoot(document.getElementById("root")).render(
    // <MyApp />
    <App />
    // reactElement
);
