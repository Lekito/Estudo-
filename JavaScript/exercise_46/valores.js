function AddNumberedList() {
    let addnumero = window.document.getElementById('adicionaNumber');
    let valor = parseInt(addnumero.value);
    let resposta = window.document.querySelector('div#resultado');
    console.log(valor)

    if (valor > 0) {
        let arrayNumberNew = new Array(valor); // isso não esta funcionando
        resposta.innerHTML = `${arrayNumberNew.length}`;
    } else {
        resposta.innerHTML = `Erro! Valor digitado [${valor}] invalido!`;
    }
}

