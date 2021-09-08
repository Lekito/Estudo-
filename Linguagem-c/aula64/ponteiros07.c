// Ponteiros com estruturas.
#include <stdio.h> 

int main (void) { 
  
  struct horario{
    int hora;
    int minuto;
    int segundo;
  };

  struct horario agora, *depois;
  depois = &agora;

   (*depois).hora = 20; //primeira forma de passar ponteiros para estruturas 
   depois -> minuto = 35; // foram mais usual de passar ponteiros para estruturas. 
   depois -> segundo = 49;

   int somatorio = 100;

   struct horario antes;

   antes.hora = somatorio + depois -> hora;

  printf("%i:%i:%i", antes.hora, agora.minuto, agora.segundo);

  getchar();

  return 0;
}