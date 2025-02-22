#include <stdio.h>

int main(void){

   int i, tabuada;
   char continua;

   do{
   printf("Deseja a tabuada para qual valor ? ");
   scanf("%d", &tabuada);
   getchar();

   for (i=0; i<11; i++){

    printf("\n%d X %d = %d\n", tabuada, i, i*tabuada);

   }
    printf("\n\nDeseja continuar ? ");
    scanf("%c", &continua);
    getchar();

   }while(continua == 's');

}
