#include <stdio.h>

int main(void){

  double n1, n2, soma;

  printf("Digite a primeira nota: ");
  scanf("%lf", &n1);
  getchar();
  printf("\nDigite a segunda nota: ");
  scanf("%lf", &n2);
  getchar();

  soma = n1 + n2;

  if (soma >= 60){
    printf("\nAprovado com nota %.1lf\n", soma);
  }

  else {
    printf("\nReprovado com nota %.1lf\n", soma);
  }

}
