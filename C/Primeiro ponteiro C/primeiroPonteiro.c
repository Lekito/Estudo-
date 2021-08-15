# include <stdio.h>

int main (void) {
    int x;
    x = 10;

    int *primeiroPonteiro;
    primeiroPonteiro = &x;

    printf("%i\n", *primeiroPonteiro);

    return 0;
}