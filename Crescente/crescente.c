#include <stdio.h>

int main(void){

  int a, b;

  do
  {
      printf("Digite dois numeros:\n");
      scanf("%d\n", &a);
      scanf("%d", &b);

       if(a > b){
        printf("\nDECRESCENTE\n\n");
       }

       else if (b > a){
        printf("\nCRESCENTE\n\n");
       }


  } while (a != b);

}
