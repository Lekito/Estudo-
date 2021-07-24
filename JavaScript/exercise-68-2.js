/*68 - Ler um vetor de 16 posições, trocar os 8 primeiros valores pelos 8 últimos, 
e vice-versa, e escrever o vetor obtido. 
*/

// Nesse exercício é respeitado o conseito de imutabilidade do objeto Array.
const posicaoIni = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16];
let auxiliary = 0;
let meio = 7;
arrayFinal = [];

console.log('Primeiro array: \n');
console.log(posicaoIni);
console.log('\n');

for (index = 0; posicaoIni.length > index; index++) {
    if (meio < posicaoIni.length) {
        arrayFinal.push(posicaoIni[meio]);
        meio++;
    } else {
        arrayFinal.push(posicaoIni[auxiliary]);
        auxiliary++;
    }
}

console.log('Array final:\n');
console.log(arrayFinal);