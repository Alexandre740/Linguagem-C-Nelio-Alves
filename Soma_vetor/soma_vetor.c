#include <stdio.h>

int main (void){

 int i, n, soma;
 double media;

 printf("Quantos numeros vai digitar: ");
 scanf("%d", &n);

//armazenamento dos dados dentro do vetor
 int vet[n-1];
 for(i = 0; i < n; i++){
  printf("\nDigite um numero: ");
  scanf("%d", &vet[i]);
 }

//soma
 soma = 0;
 for(i = 0; i < n; i++){
  soma = soma + vet[i];
 }

//media
 media = soma / n;

 printf("Valores = ");
 for(i = 0; i < n; i++){
  printf("%d ", vet[i]);
 }

 printf("\nSoma = %d ", soma);
 printf("\nMedia = %.2lf ", media);

}
