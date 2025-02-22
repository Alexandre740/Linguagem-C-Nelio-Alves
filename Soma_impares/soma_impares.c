#include <stdio.h>

int main(){

  int x, y, i, soma;

  soma = 0;
  printf("Escreva X: ");
  scanf("%d", &x);
  printf("Escreva Y: ");
  scanf("%d", &y);
  getchar();


  if(x == y){
    printf("\n\nNao existem impares entre esses numeros\n");
    return 0;
  }

  if(y > x){
    for(i = x + 1; i = y - 1; i++ ){
     if (i % 2 != 0){
            soma = soma + i;
     }
    }
    printf("\n\nSoma dos impares = %d", soma);
    return 0;
   }


  if(x > y){
    for(i = y + 1; i = x - 1; i++ ){
     if (i % 2 != 0){
            soma = soma + i;
     }
    }
    printf("\n\nSoma dos impares = %d", soma);
    return 0;
   }

   return 0;
}
