import React, { Component } from "react";
import CustomersList from "./CustomersList";
import NavBar from "./NavBar";

export default class App extends Component {
    render() {
        return (
            <React.Fragment>
                <NavBar />
                <CustomersList />
            </React.Fragment>
        );
    }
}