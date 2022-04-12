// Multiplication can be thought of as repeated addition. Exponentiation can be thought of as repeated multiplication. Tetration is repeated exponentiation. Just as the 4th power of 3 is 3*3*3*3, the 4th tetration of 3 is 3^3^3^3. By convention, we insert parentheses from right to left, so the 4th tetration of 3 is 3^(3^(3^3))) = 3^(3^27) = 3^7625597484987 = a really big number

function tetration(x, y) {
    let out = x;
    if (!y) return 1;

    for (let i = 1; y > i; i++) {
        out = x ** out
    }
    return out;
}

// const tetration = (x, y) => Array.from({ length: y }, _ => _).reduce((acc) => Math.pow(x, acc), 1);


// function tetration(x, y) {
//     if (y == 0)
//         return 1;
//     return x ** tetration(x, y - 1);
// }

// const tetration = (x, y) => !y ? 1 : x ** tetration(x, y - 1);//


// function tetration(x, y) {
//     if (y == 0) return 1;
//     return Math.pow(x, tetration(x, y - 1));
// }