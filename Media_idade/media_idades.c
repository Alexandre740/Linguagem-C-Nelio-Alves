#include <stdio.h>  // Input & Output

int main(void){

  int a, soma=0, cont=0;
  double media=0;


  printf("Digite as idades\n");
  scanf("%d", &a);

  while(a > 0)
  {
    cont = cont + 1;
    soma = soma + a;
    scanf("%d", &a);
  }

  if (cont == 0){
    printf("\nIMPOSSIVEL CALCULAR\n");
  }

  else{
  media = (double) soma / cont;

  printf("\nMEDIA = %.2lf\n", media);
  }

}
