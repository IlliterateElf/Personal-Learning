import React, { Component } from "react";
import { Link } from "react-router-dom";

export default class NavBar extends Component {
    render() {
        return (
            <React.Fragment>
                <nav className="navbar navbar-expand-lg navbar-dark bg-dark">
                    <div className="container-fluid">
                        <Link to="/" className="navbar-brand">My Favorite Movies</Link>
                        <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                            <span className="navbar-toggler-icon"></span>
                        </button>
                        <div className="collapse navbar-collapse" id="navbarSupportedContent">
                            <ul className="navbar-nav me-auto mb-2 mb-lg-0">
                                <li className="nav-item">
                                    <Link to="/" className="nav-link">Home</Link>
                                </li>
                                <li className="nav-item">
                                    <Link to="/myfavorites" className="nav-link">My Favorites</Link>
                                </li>
                                <li className="nav-item">
                                    <Link to="/explore" className="nav-link">Explore</Link>
                                </li>
                                <li className="nav-item">
                                    <Link to="/account" className="nav-link">Account</Link>
                                </li>
                                <li className="nav-item">
                                    <Link to="/login" className="nav-link">Login</Link>
                                </li>
                            </ul>
                            <form className="d-flex" role="search">
                                <input className="form-control me-2" type="search" placeholder="Search" aria-label="Search" />
                                <button className="btn btn-outline-success" type="submit">Search</button>
                            </form>
                        </div>
                    </div>
                </nav>
            </React.Fragment>
        );
    }
}