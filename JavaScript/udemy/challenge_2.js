const scoreDolphins = (96 + 108 + 89) / 3
const scoreKoalas = (88 + 100 + 110) / 3

console.log(scoreDolphins, scoreKoalas)

if (scoreDolphins > scoreKoalas) {
    console.log(' Dolphins win the trophy game')
} else if (scoreKoalas > scoreDolphins) {
    console.log(' Koalas win the trophy game')
} else {
    console.log('Both win the trophy!')
}
