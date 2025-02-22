#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double b, h, area, preco, valor;

  //entrada de dados
  printf("Valor da base: ");
  scanf("%lf", &b);
  getchar();

  printf("\nValor da altura: ");
  scanf("%lf", &h);
  getchar();

  printf("\nPreco do metro quadrado: ");
  scanf("%lf", &preco);
  getchar();

  area = b * h;
  valor = area * preco;

  printf("\n");

  printf("Area = %.2lf", area);
  printf("\nPreco do terreno = %.2lf", valor);

}
