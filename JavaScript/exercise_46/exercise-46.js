/* 
Ler um conjunto de valores inteiros e positivos, calcular e escrever a soma
e o produto desses valores.
*/

const listInt = [2, 4, 3, 7, 9, 5];
let soma = 0;

for (index = 0; listInt.length > index; index++) {
    if (listInt[index] > 0) {
        soma = soma + listInt[index];
        console.log(`Soma da lista na posição ${index + 1} = ${soma}`);
    } else {
        console.log(`Erro! Na lista contem o valor [${listInt[index]}] não permitido! Digite uma lista de números interiros e positivos!`);
    }
}

console.log('A soma total da lista: \n');
console.log(`Soma total= ${soma}`);