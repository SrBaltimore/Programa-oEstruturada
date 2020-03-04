#include <stdio.h>
#include <stdlib.h>

#define qtdaluno 2

struct dadosAluno{
  int idade;
  float media;
};

int main() {
  struct dadosAluno aluno[qtdaluno];
  int i;
  float temp =0;

  for(i=0;i<qtdaluno;i++){
    printf("Digite a %d idade: ",i+1);
    scanf("%d",&aluno[i].idade);

    printf("Digite a %d media: ",i+1);
    scanf("%f",&aluno[i].media);
  }
  printf("A media dos dados informados\n");

  for(i=0;i<qtdaluno;i++){
    printf("\n%d°\n\nIdade: %d\nMedia: %.2f",i+1, aluno[i].idade, aluno[i].media );
  }




  }
