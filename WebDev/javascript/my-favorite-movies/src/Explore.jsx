import React, { Component } from "react";

export default class Explore extends Component {
    constructor(props) {
        super(props);

        this.state = {
            query: ""
        };
    }

    handleChange = (event) => {

    }

    handleKeyPress = (event) => {
        if (event.key === 'Enter') {
            console.log(this.state.query);
        }
    }

    render() {
        return (
            <div>
                <h1 className="m-2">Explore</h1>
                <div className="mb-3 m-2">
                    <input
                        type="text"
                        className="form-control"
                        value={this.state.query}
                        onChange={(event) => { this.setState({ query: event.target.value }) }}
                        onKeyUp={this.handleKeyPress}
                    />
                </div>
            </div>
        )
    }
}