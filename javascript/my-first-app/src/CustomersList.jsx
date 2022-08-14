import React, { Component } from "react";

export default class CustomersList extends Component {
    state = {
        pageTitle: "Customers",
        customersCount: 5,
        customers: [
            {
                id: 1,
                name: "Scott",
                phone: "123-456",
                address: { city: "London" },
                photo: "https://picsum.photos/id/1010/60"
            },
            {
                id: 2,
                name: "John",
                phone: null,
                address: { city: "New York" },
                photo: "https://picsum.photos/id/1011/60"
            },
            {
                id: 3,
                name: "Bob",
                phone: "345-678",
                address: { city: "Jersey" },
                photo: "https://picsum.photos/id/1012/60"
            },
            {
                id: 4,
                name: "Drake",
                phone: null,
                address: { city: "Los Angeles" },
                photo: "https://picsum.photos/id/1013/60"
            },
            {
                id: 5,
                name: "Larry",
                phone: "567-890",
                address: { city: "Orange" },
                photo: "https://picsum.photos/id/1014/60"
            }
        ]
    };

    render() {
        return (
            <React.Fragment>
                <h4 className="m-1 p-1">
                    {this.state.pageTitle}
                    <span className="badge bg-secondary m-2">
                        {this.state.customersCount}
                    </span>
                    <button className="btn btn-info" onClick={this.onRefreshClick}>Refresh</button>
                </h4>
                <table className="table">
                    <thead>
                        <tr>
                            <th>#</th>
                            <th>Photo</th>
                            <th>Customer Name</th>
                            <th>Phone</th>
                            <th>City</th>
                        </tr>
                    </thead>
                    <tbody>{this.getCustomerRow()}</tbody>
                </table>
            </React.Fragment>
        );
    }

    onRefreshClick = () => {
        this.setState({
            customersCount: 7
        })
    }

    getPhoneToRender = (phone) => {
        return phone ? (
            phone
        ) : (
            <div className="bg-warning p-2 text-center">No Phone</div>
        );
    }

    getCustomerRow = () => {
        return (this.state.customers.map((cust, index) => {
            return (
                <tr key={cust.id}>
                    <td>{cust.id}</td>
                    <td>
                        <img src={cust.photo} alt="Customer" />
                        <div>
                            <button className="btn btn-sm btn-secondary" onClick={() => {
                                this.onChangePictureClick(cust, index);
                            }}>Change Picture</button>
                        </div>
                    </td>
                    <td>{cust.name}</td>
                    <td>{this.getPhoneToRender(cust.phone)}</td>
                    <td>{cust.address.city}</td>
                </tr>
            );
        }));
    }

    onChangePictureClick = (cust, index) => {
        let custArr = this.state.customers;
        custArr[index].photo = "https://picsum.photos/id/104/60";
        this.setState({ customers: custArr })
    }
}