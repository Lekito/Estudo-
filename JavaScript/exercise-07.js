/* 07 - Ler o nome de uma pessoa na forma “nome” seguido por “sobrenome” e 
escrever na forma “sobrenome” seguido por “nome”. Exemplo:
entrada: “Fulano”, “de Tal”
saída: “de Tal”, “Fulano”
*/

// modo simples 
/*
let nome = 'Alex';
let sobrenome = 'Ribeiro';

console.log(`Meu sobrenome é ${sobrenome} e o meu nome é ${nome}`);
*/

// usando array simples
/*
let pessoa = [];

pessoa.push('Alex', 'Ribeiro');

console.log(`Meu sobrenome é ${pessoa[1]} e o meu nome é ${pessoa[0]}`);
console.log(`O tamanho do array é ${pessoa.length} elentos.`);
*/


// usando array de objetos com 'for of'

let pessoas = [
    {
        nome: 'Alex',
        sobrenome: 'Ribeiro'
    },
    {
        nome: 'João',
        sobrenome: 'Costa'
    },
    {
        nome: 'Maria',
        sobrenome: 'Silva'
    }
];

console.log('Lista de pessoas \n');

for (let i of pessoas) { // isso é igual for ( i = 0; i < pessoas.length; i++) 
    console.log(`O sobrenome é ${i.sobrenome} e o nome é ${i.nome} `); // para for no comentário acima : ${pessoas[i].sobrenome}
}
console.log(`\nO tamanho do array é ${pessoas.length} elentos.`);