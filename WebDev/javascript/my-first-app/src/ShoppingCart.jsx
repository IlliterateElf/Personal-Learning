import React, { Component } from "react";
import Product from "./Product";

export default class ShoppingCart extends Component {

    constructor(props) {
        super(props);

        this.state = {
            products: []
        }
    }

    render() {
        return (
            <div className="container-fluid">
                <h4>Shopping Cart</h4>

                <div className="row">
                    {this.state.products.map((prod) => {
                        return <Product
                            key={prod.id}
                            product={prod}
                            onIncrement={this.handleIncremental}
                            onDecrement={this.handleDecrement}
                            onDelete={this.handleDelete}
                        >
                            <button className="btn btn-primary">Buy Now</button>
                        </Product>
                    })}
                </div>
            </div>
        );
    }

    componentDidMount = async () => {
        let response = await fetch("http://localhost:5000/products", { method: "GET" });
        let prods = await response.json();

        this.setState({ products: prods });
    }

    componentWillUnmount() {

    }

    componentDidUpdate(prevProps, prevState) {

    }

    componentDidCatch(error, info) {
        console.log(error, info);

        localStorage.lastError = `${error}\n${JSON.stringify(info)}`;
    }

    handleIncremental = (product, max) => {
        let allProducts = [...this.state.products];
        let index = allProducts.indexOf(product);
        if (allProducts[index].quantity < max) {
            allProducts[index].quantity++;
            this.setState({ products: allProducts })
        }
    };

    handleDecrement = (product, min) => {
        let allProducts = [...this.state.products];
        let index = allProducts.indexOf(product);
        if (allProducts[index].quantity > min) {
            allProducts[index].quantity--;
            this.setState({ products: allProducts })
        }
    };

    handleDelete = (product) => {
        let allProducts = [...this.state.products];
        let index = allProducts.indexOf(product);

        if (window.confirm("Are you sure?")) {
            allProducts.splice(index, 1);
            this.setState({ products: allProducts });
        }
    }
}