#include <stdio.h>

//mostrar na tela todos os numeros negativos do vetor

int main(void){
 
  int n, i, num;
  
  //entrada de dados
  printf("Quantos numeros vai digitar ? ");
  scanf("%d", &n);
  getchar();
  
  
  //criando o vetor e armazenando os valores;
  int vet[n-1];
  for (i=0; i < n; i++){
   printf("\nDigite o numero %d do vetor: ", i);
   scanf("%d", &vet[i]);
   getchar();
  }

  //mostrar os numeros negativos
  printf("\nNUMEROS NEGATIVOS: ");
  for (i=0; i < n; i++){
   if (vet[i] < 0){
    printf("\n%d", vet[i]);
   }  
  }
  
}
