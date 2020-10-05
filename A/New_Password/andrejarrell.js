/*
 *
 * Problem- New Password
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/770/problem/A
 * Language- JavaScript
 * 
 */

let symbols = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
];

// Gets random element from array
let random = array => array[Math.floor(Math.random() * array.length)];

// Repeats elements in array 
let repeat = (array, length) => {
    let store = [];
    for (i = 0; i < length; i++) {
        let element = array[i % array.length];
        store.push(element)
    }
    return store;
}

// n = length, k = distinct symbols
let generatePassword = (n, k) => {

    if (k > n) 
        throw Error('k cannot be greater than n');

    if (n > 100 || n < 2) 
        throw Error('n must be in range 2 - 100');

    if (k > symbols.length || k < 2) 
        throw Error('k must be in range 2 - 26');

    // We store unique symbols here
    let distinctSymbols = [];

    // Loop k times
    for (let i = 0; i < k; i++) {

        // Get random symbols
        let symbol = random(symbols);

        // Get index of symbol in the array
        let index = symbols.indexOf(symbol);

        // Using the index remove the element
        symbols.splice(index, 1);

        // Add symbol to distinctSymbols array
        distinctSymbols.push(symbol);
    }

    // Repeat distinctSymbols n times
    let password = repeat(distinctSymbols, n);

    // Return password as string
    return password.join('');
}

let password = generatePassword(10, 4);

console.log({ password });