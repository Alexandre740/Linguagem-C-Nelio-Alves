#include <stdio.h>

int main(void){

  int n, i, j, cont;

  printf("Qual a ordem da matriz ? ");
  scanf("%d", &n);
  getchar();

  //criacao da matriz
  int mat[n][n];

  //armazenamento de dados
  for (i=0; i < n; i++){
    for (j=0; j < n; j++){
	 printf("\nElemento [%d,%d]: ", i, j);
	 scanf("%d", &mat[i][j]);
	 getchar();
	}
  }

  //diagonal principal
  printf("\n\nDiagonal principal: ");
  for (i=0; i < n; i++){
   for (j=0; j < n; j++){
    if (i == j){
	 printf("%d ", mat[i][j]);
	}
   }
  }

  //negativos
  cont = 0;
  printf("\n\nQuantidade de negativos: ");
  for (i=0; i < n; i++){
   for (j=0; j < n; j++){
    if( mat[i][j] < 0){
     cont = cont + 1;
	}
   }
  }

  printf("%d", cont);

}
