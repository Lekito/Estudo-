# include <stdio.h>

int main (void) {
    int x;
    x = 10;

    int *primeiroPonteiro;
    primeiroPonteiro = &x; //usando & pegamos o enderço de memoria da variável X

    printf("%i\n", *primeiroPonteiro); // Usamos * para passar o valor do ponteiro. Sem o * estamos informando o enderço de memoria.

    return 0;
}