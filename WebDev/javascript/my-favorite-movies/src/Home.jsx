import React, { Component } from "react";
import MovieItem from "./MovieItem";

export default class Home extends Component {
    constructor(props) {
        super(props);

        this.state = {
            apiKey: "6640078bed1c57de87f118d7a89399d3",
            movies: {
                results: []
            },
            apiConfig: []
        }
    }

    render() {
        return (
            <div className="m-2">
                <div>
                    <h1>Home</h1>
                </div>
                {this.mapMovies()}
            </div>
        )
    }

    componentDidMount = async () => {
        let movieResponse = await fetch("https://api.themoviedb.org/3/discover/movie?api_key=6640078bed1c57de87f118d7a89399d3&language=en-US&sort_by=popularity.desc&include_adult=false&include_video=false&page=1&with_watch_monetization_types=flatrate",
            { method: "GET" });
        let moviesQuery = await movieResponse.json();
        let configQuery = require("./api_configuration.json");
        this.setState({ movies: moviesQuery, apiConfig: configQuery });
    }

    mapMovies = () => {
        if (this.state.movies.results.length > 0) {
            return (
                <div className="row">
                    {this.state.movies.results.map((mov) => {
                        return <MovieItem
                            key={mov.id}
                            movie={mov}
                        />
                    })}
                </div>
            )
        }
    }
}