import React, { Component } from "react";

export default class MovieItem extends Component {
    constructor(props) {
        super(props);

        this.state = {
            source: `https://image.tmdb.org/t/p/w500${this.props.movie.backdrop_path}`,
            title: this.props.movie.title,
            overview: this.props.movie.overview.substring(0, 80) + "..."
        }
    }
    render() {
        return (
            <div className="card" style={{ width: "18rem" }}>
                <img src={this.state.source} />
                <div className="card-body">
                    <h5 className="card-title">{this.state.title}</h5>
                    <p className="card-text">{this.state.overview}</p>
                    <a href="" className="btn btn-primary">Go somewhere</a>
                </div>
            </div>
        )
    }
}