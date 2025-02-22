#include <stdio.h>
#include <math.h>

int main(){

  double a, b, c;
  double delta, x1, x2;


  printf("Coeficiente a: ");
  scanf("%lf", &a);
  getchar();

  printf("\nCoeficiente b: ");
  scanf("%lf", &b);
  getchar();

  printf("\nCoeficiente c: ");
  scanf("%lf", &c);
  getchar();

  delta = pow(b,2) - 4 * (a) * (c);
  x1 = (-b + delta) / 2 *a;
  x2 = (-b - delta) / 2 *a;

  if (delta < 0 || a == 0){
    printf("\nNao possui raizes reais\n\n");
    goto end;
  }


  printf("\nX1: %.4lf", x1);
  printf("\nX2: %.4lf", x2);

  end:
  return 0;
}
