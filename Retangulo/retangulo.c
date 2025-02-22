#include <stdio.h>
#include <math.h>

//a biblioteca math.h vai adicionar as funcoes de expoente e raiz q
//para expoente faz: pow(x,y) -> x elevado a y
//para a raiz q faz: sqrt(x) -> raiz q de x

int main(void)
{
  double b, h, area, d, p;

  printf("Base = ");
  scanf("%lf", &b);
  getchar();

  printf("\nAltura = ");
  scanf("%lf", &h);
  getchar();


  area = b * h;
  p = 2 * (b +h);
  d = sqrt(pow(h,2) + pow(b,2));


  printf("\nArea = %.4lf", area);
  printf("\nPerimetro = %.4lf", p);
  printf("\nDiagonal = %.4lf", d);
  printf("\n");
}
