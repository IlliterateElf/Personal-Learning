"use strict";

let user = {};

let result = '';
user.name = 'John';
user.surname = 'Smith';
user.name = 'Pete';
for (let key in user) {
    result = result + key + ' is ' + user[key] + ' ';
}
alert(result);
result = '';
delete user.name;
for (let key in user) {
    result = result + key + ' is ' + user[key] + ' ';
}
alert(result);