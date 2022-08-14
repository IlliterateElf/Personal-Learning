import React, { Component } from "react";
import CustomersList from "./CustomersList";
import Dashboard from "./Dashboard";
import Login from "./Login";
import NavBar from "./NavBar";
import ShoppingCart from "./ShoppingCart";
import { Routes, Route, BrowserRouter } from "react-router-dom";
import NoMatch from "./NoMatch";

export default class App extends Component {
    render() {
        return (
            <BrowserRouter>
                <NavBar />
                <Routes>
                    <Route path="/" exact element={<Login />} />
                    <Route path="/dashboard" exact element={<Dashboard />} />
                    <Route path="/customers" exact element={<CustomersList />} />
                    <Route path="/cart" exact element={<ShoppingCart />} />
                    <Route path="*" exact element={<NoMatch />} />
                </Routes>
            </BrowserRouter>
        );
    }
}