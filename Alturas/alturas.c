#include <stdio.h>

int main(void){

  int n, i;
  double media, soma, altura, porcentagem;

  printf("Quantas pessoas serao digitadas ? ");
  scanf("%d", &n);

  char nomes[n][50];
  int idades[n], alturas[n];

  for(i=0; i < n; i++){
   printf("\nDados da %da pessoa", i+1);
   printf("\nNome: ");
   scanf("%s", &nomes[i]);
   printf("\nIdade: ");
   scanf("%d", &idades[i]);
   getchar();
   printf("\nAltura: ");
   scanf("%lf", &alturas[i]);
   getchar();
   }

   //porcentagem
   porcentagem = 0;
   for(i=0; i < n; i++){
    if(idades[i] < 16){
	 porcentagem = porcentagem + 1;
	}
   }

   //media das alturas
   //o erro esta nesse bloco aqui, o restante esta ok
   soma = 0;
   for(i=0; i < n; i++){
    soma = soma + alturas[i];
   }

   media = soma / n;


  printf("\nAltura media = %.2lf", media);
  printf("\nPessoas com menos de 16 anos: %.1lf", 100*(porcentagem/n) );

  //nome das pessoas com menos de 16 anos
  for(i=0; i < n; i++){
   if(idades[i] < 16){
    printf("\n%s", nomes[i]);
   }
  }

}
