import React, { Component } from "react";
import Product from "./Product";

export default class ShoppingCart extends Component {
    state = {
        products: [
            { id: 1, productName: "iPhone", price: 8900, quantity: 0 },
            { id: 2, productName: "Sony Camera", price: 4500, quantity: 0 },
            { id: 3, productName: "Samsun OLED TV", price: 7745, quantity: 0 },
            { id: 4, productName: "iPad Pro", price: 12400, quantity: 0 },
            { id: 5, productName: "Xbox", price: 7780, quantity: 0 },
            { id: 6, productName: "Dell Monitor", price: 880, quantity: 0 },
        ],
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
                        >
                            <button className="btn btn-primary">Buy Now</button>
                        </Product>
                    })}
                </div>
            </div>
        );
    }

    handleIncremental = (product) => {
        let allProducts = [...this.state.products];
        let index = allProducts.indexOf(product);
        allProducts[index].quantity++;
        this.setState({ products: allProducts })
    };

    handleDecrement = (product) => {
        let allProducts = [...this.state.products];
        let index = allProducts.indexOf(product);
        allProducts[index].quantity--;
        this.setState({ products: allProducts })
    };
}