#include <stdio.h>
#include <stdlib.h>

struct Prato{
char cor;
struct Prato *prox;
};

typedef struct Prato prato;

prato *pilha;

void add(char cor){
  prato *p = (prato*) malloc(sizeof(prato));
  p -> cor = cor;
  p -> prox = pilha;
  pilha = p;
}

void rem(){
  if(pilha == NULL){
    printf("Pilha vazia.");
  }
  else{
    pilha = pilha -> prox;
  }
}

void imprimir(prato *p){
    if(p != NULL){
        printf("Cor do prato: %c\n", p -> cor);
        imprimir(p -> prox);
    }
}

int main(){
  add('A');
  add('P');
  add('R');
  add('R');

  prato *pilhaAux = pilha;
  imprimir(pilhaAux);
}
