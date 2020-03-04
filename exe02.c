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
  for(i=0;i<qtdaluno;i++){
    temp += aluno[i].idade;
  }
  temp = temp / qtdaluno;


  printf("A media dos dados informados\n\nMedia: %.2f", temp );


  }
