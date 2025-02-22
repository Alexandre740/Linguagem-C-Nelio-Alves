#include <stdio.h>

int main(void){

  double n1, n2, media;
  char nome1[50], nome2[50];

  printf("Dados primeira pessoa: \n");
  printf("Nome: ");
  gets(nome1);
  printf("\nIdade: ");
  scanf("%lf", &n1);
  getchar();


  printf("\nDados segunda pessoa: \n");
  printf("Nome: ");
  gets(nome2);
  printf("\nIdade: ");
  scanf("%lf", &n2);
  getchar();


  media = (n1 + n2) / 2;

  printf("A media entre as idades de %s e %s eh de %.1lf anos\n",
          nome1, nome2, media);

}
