//file can be ran by running: node Gurvir-Sandhar <input string>

//user input
let input = process.argv[2];

//holds distinct chars
let charList = {};

//keeps track of number of distinct chars
let numDistinct = 0;

//loop through input and check if currentChar is in charList
//else add currentChar to charList and increment numDistinct
for(let i = 0; i < input.length; i++) {
    let currentChar = input[i];
    if(!charList.hasOwnProperty(currentChar)) {
        charList[currentChar] = true;
        numDistinct++;
    }
}

//check if number of distinct chars is odd
if(numDistinct % 2 == 1) {
    console.log("IGNORE HIM!");
} else {
    console.log("CHAT WITH HER!");
}

