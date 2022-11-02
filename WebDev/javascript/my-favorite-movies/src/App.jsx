import React, { Component } from "react";
import { Routes, Route, BrowserRouter } from "react-router-dom";
import NavBar from "./NavBar";
import Home from "./Home";
import Account from "./Account";
import Explore from "./Explore";
import Login from "./Login";
import MyFavorites from "./MyFavorites";

export default class App extends Component {
    render() {
        return (
            <BrowserRouter>
                <NavBar />
                <Routes>
                    <Route path="/" exact element={<Home />} />
                    <Route path="/account" exact element={<Account />} />
                    <Route path="/explore" exact element={<Explore />} />
                    <Route path="/login" exact element={<Login />} />
                    <Route path="/myfavorites" exact element={<MyFavorites />} />
                </Routes>
            </BrowserRouter>
        )
    }
}