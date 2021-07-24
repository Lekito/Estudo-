/* 68 - Ler um vetor de 16 posições, trocar os 8 primeiros valores pelos 8 últimos, 
e vice-versa, e escrever o vetor obtido.
*/

let posicaoIni = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16];
let auxiliary = undefined;
let meio = 7;
console.log(posicaoIni)

for (index = 0; index < (posicaoIni.length) / 2; index++) {
    auxiliary = posicaoIni[index];
    posicaoIni[index] = posicaoIni[meio];
    posicaoIni[meio] = auxiliary;

    meio++;
}

console.log('\n');
console.log(posicaoIni);
