import React from "react";
import ReactDOM from "react-dom";
import "jquery";
import "@popperjs/core/dist/umd/popper"
import "bootstrap/dist/js/bootstrap";
import "bootstrap/dist/css/bootstrap.css"

var element = <button class="btn btn-danger">Hello World</button>;
ReactDOM.render(element, document.getElementById("root"));
