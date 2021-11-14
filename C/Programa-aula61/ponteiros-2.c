#include <stdio.h>

int main(void) {
    int x = 10;
    int *ponteiroY;
    int y = 20;

    ponteiroY = &x;// estou passando o endereço da variável x para 'ponteiroY'

    
    *ponteiroY = y;

    printf("%i %i\n", x, y);

    return 0;
}