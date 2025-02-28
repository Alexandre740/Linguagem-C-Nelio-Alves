#include <stdio.h>

int main(void){

 //programa que leia nome, idade e altura de N pessoas
 //depois mostrar na tela:
 //a) altura media
 //b) porcentagem de pessoas com menos de 16 anos
 //c) nomes das pessoas com menos de 16 anos

 int n, i;

 printf("Quantas pessoas serao digitadas ? ");
 scanf("%d", &n);
 getchar();

 //criacao dos vetores (arrays)
 char nomes[n][50];
 int idades[n];
 double alturas[n];

 //armazenamento de dados
 for(i=0; i < n; i++){
  printf("\n\nDados da %da pessoa", i+1);
  printf("\nNome: ");
  scanf("%s", &nomes[i]);
  getchar();
  printf("\nIdade: ");
  scanf("%d", &idades[i]);
  getchar();
  printf("\nAltura: ");
  scanf("%lf", &alturas[i]);
  getchar();
  }

 //calculo da altura media
 double soma=0, media;

 for(i=0; i < n; i++){
  soma = soma + alturas[i];
 }

 media = soma / n;


 //calculo da porcentagem
 int menor_de_16=0;
 double porcentagem;

 //por razao desconhecida a variavel nao esta realizando a contagem
 //decidi retirar esse trecho e o trecho da linha 64 por esse motivo
 for(i=0; i < n; i++){
  if(idades[i] < 16){
   menor_de_16 = menor_de_16 + 1;
  }
 }

 porcentagem = (double) menor_de_16 *100 / n;


 //saida de dados
 printf("\nAltura media = %.2lf", media);

 printf("\nPessoas com menos de 16 anos = %.2lf", porcentagem);

 //nomes das pessoas com menos de 16 anos
 for(i=0; i < n; i++){
  if (idades[i] < 16){
   printf("\n%s", nomes[i]);
  }
 }

 printf("\n");

}
