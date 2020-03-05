#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define qtdLivros 10


struct livro{
  char titulo[100];
  int anoEd, numPag;
  float preco;
};

int main() {
  struct livro Livros[qtdLivros];
  int i,j, idM=0;
  float temp =0, maiorP, menorP;
  //entrada
  printf("\tInforme os seguintes dados\n");
  for(i=0;i<qtdLivros;i++){
    printf("\n%d� Livro\n",i+1);
    printf("Nome: ");
    fflush(stdin);
    gets(Livros[i].titulo);
    printf("Ano da edicao: ");
    scanf("%d",&Livros[i].anoEd);
    printf("Numero de paginas: ");
    scanf("%d",&Livros[i].numPag);
    printf("preco: ");
    scanf("%f",&Livros[i].preco);
   }
//livro com maior preço
  printf("\tLivro de maior preco\n");
  maiorP = Livros[0].preco;

  for(i=0;i<qtdLivros;i++){
   for(j=0;j<qtdLivros;j++){
   	if(maiorP<Livros[j].preco){
   			maiorP = Livros[j].preco;
   			idM = j;
		   }
	   }
   }

  printf("\nNome: %s",Livros[idM].titulo);
  printf("\nAno da edicao: %d",Livros[idM].anoEd);
  printf("\nNumero de paginas: %d",Livros[idM].numPag);
  printf("\npreco: %.2f",Livros[idM].preco);
//livro com menor preço
  printf("\tLivro de menor preco\n");
  menorP = Livros[0].preco;
  for(i=0;i<qtdLivros;i++){
   for(j=0;j<qtdLivros;j++){
   	if(maiorP>Livros[j].preco){
   			maiorP = Livros[j].preco;
   			idM = j;
		   }
	   }
   }

  printf("\nNome: %s",Livros[idM].titulo);
  printf("\nAno da edicao: %d",Livros[idM].anoEd);
  printf("\nNumero de paginas: %d",Livros[idM].numPag);
  printf("\npreco: %.2f",Livros[idM].preco);

//Livros com preço igual


}
