#include <stdio.h>

int main(void){

  int a, b, c;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  getchar();

  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);
  getchar();

  printf("\nDigite o terceiro valor: ");
  scanf("%d", &c);
  getchar();

  if (a > b && b > c){
    printf("\nMenor = %d", c);
  }

  else if (b > a && a > c){
    printf("\nMenor = %d", c);
  }

  else if (b == a && a > c){       //todos os casos do c
    printf("\nMenor = %d", c);
  }

  else if (c > a && a > b){
    printf("\nMenor = %d", b);
  }

    else if (a > c && c > b){
    printf("\nMenor = %d", b);
  }

    else if (c == a && a > b){  //todos os casos do b
    printf("\nMenor = %d", b);
  }

    else if (b > c && c > a){
    printf("\nMenor = %d", a);
  }

    else if (c > b && b > a){
    printf("\nMenor = %d", a);
  }

    else if (b == c && c > a){  //casos do a
    printf("\nMenor = %d", a);
  }

    else if (a == b && b == c){  //todos sendo iguais
    printf("\nMenor = %d", c);
  }

    else if (a == c && a > b){  //numeros iguais nos extremos
    printf("\nMenor = %d", b);
  }

    else if (a == c && b > c){  //numeros iguais nos extremos como {5, 12, 5}
    printf("\nMenor = %d", c);
  }
}
