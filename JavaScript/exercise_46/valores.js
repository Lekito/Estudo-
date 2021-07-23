function AddNumberedList() {
    let addnumero = window.document.getElementById('adicionaNumber');
    let valor = parseInt(addnumero.value);
    let resposta = window.document.querySelector('div#resultado');
    let arrayNumber = [];
    console.log(typeof (valor))

    if (valor > 0) {
        let arrayNumber = arrayNumber.push(valor); // isso não esta funcionando
        resposta.innerHtml = `${arrayNumber}`;
    } else {
        resposta.innerHtml = `Erro! Valor digitado [${valor}] invalido!`;
    }
}