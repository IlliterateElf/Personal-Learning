import React, { Component } from "react";

export default class Login extends Component {
    constructor(props) {
        super(props);

        this.state = {
            email: "abc@test.com",
            password: "abc123",
            message: ""
        };
    }
    render() {
        return (
            <div className="col-lg-9">
                <h4 className="m-1 p-2 border-bottom">Login</h4>

                {this.state.message}
                <div className="m-1 p-2 form-group form-row">
                    <label className="col-lg-4">Email:</label>
                    <input
                        type="text"
                        className="form-control"
                        value={this.state.email}
                        onChange={(event) => { this.setState({ email: event.target.value }) }}
                    />
                </div>
                <div className="m-1 p-2 form-group form-row">
                    <label className="col-lg-4">Password:</label>
                    <input
                        type="password"
                        className="form-control"
                        value={this.state.password}
                        onChange={(event) => { this.setState({ password: event.target.value }) }}
                    />
                </div>
                <div>
                    <button className="btn btn-primary" onClick={this.onLoginClick}>
                        Login
                    </button>
                </div>
            </div>
        );
    }

    onLoginClick = async () => {
        let response = await fetch(`http://localhost:5000/users?email=${this.state.email}&password=${this.state.password}`, { method: "GET" });
        let body = await response.json();

        if (body.length > 0) {
            this.setState({ message: <span className="m-1 p-2 text-success">Successfully Logged-in</span> });
        }
        else {
            this.setState({ message: <span className="m-1 p-2 text-failed">Failed to Log-in</span> });
        }
    };
}