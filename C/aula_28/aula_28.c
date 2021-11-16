#include <stdio.h>

int main() {
  int x;
  void imprimaMensagem(void);
  imprimaMensagem();

  x = 10;
  return 0;
}

void imprimaMensagem(void) {
  printf("Ola mundo!");
}