#include <stdio.h>

int main(){

  int m, n, i, j;


  //entrada de dados;
  printf("Quantidade de linhas ? ");
  scanf("%d", &m);
  printf("\nQuantidade de colunas ? ");
  scanf("%d", &n);
  getchar();


  //criacao da matriz
  double mat[m][n];

  //armazenamento de dados na matriz
  for(i=0; i < m; i++){
   printf("Elementos da %da linha\n", i+1);
   for(j=0; j < n; j++){
    scanf("%lf", &mat[i][j]);
   }
  }

  //criacao do vetor;
  //colocar 0 em todas as posicoes para
  //evitar lixo de memoria;
  double vet[m];
   for(i=0; i < m; i++){
    vet[i] = 0;
   }

  //armazenamento da soma das linhas no vetor
  for(i=0; i < m; i++){
   for(j=0; j < n; j++){
    vet[i] = vet[i] + mat[i][j];
   }
  }

  //mostrar vetor gerado;
  printf("\n\nVetor gerado: ");
  for(i=0; i < m; i++){
   printf("\n%lf", vet[i]);
  }

}
