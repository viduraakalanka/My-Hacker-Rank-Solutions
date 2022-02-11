'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    let letter;
    // Write your code here
    const arr1 = new Set(['a','e','i','o','u']);
    const arr2 = new Set(['b','c','d','f','g']);
    const arr3 = new Set(['h','j','k','l','m']);
    const arr4 = new Set(['n','p','q','r','s','t','v','w','x','y','z']);
    
    switch(true){
        case arr1.has(s[0]): 
            letter='A';
            break;
        case arr2.has(s[0]): 
            letter='B';
            break;
        case arr3.has(s[0]): 
            letter='C';
            break;
        case arr4.has(s[0]): 
            letter='D';
            break;
    }
    
    
    
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}
