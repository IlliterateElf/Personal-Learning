"use strict";

function isEmpty(obj) {
    for(key in obj) {
        return false;
    }
    return true;
}
