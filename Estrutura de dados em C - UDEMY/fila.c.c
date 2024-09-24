#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  int senha;
  struct Pessoa *prox;
};

typedef struct Pessoa pessoa;

pessoa *filaInicio;
void add(int senha){
  pessoa *p = (pessoa*) malloc(sizeof(pessoa));
    p -> senha = senha;
    p -> prox = NULL;

  if(filaInicio == NULL){
    filaInicio = p;
  }
  else {
    pessoa *filaAux = filaInicio;
    while(filaAux -> prox!= NULL){
      filaAux = filaAux -> prox;
    }
    filaAux -> prox = p;
  }
}

void rem(){
  if (filaInicio == NULL){
    printf("Lista vazia.");
  }
  else{
    filaInicio = filaInicio -> prox;
  }
}

void imprime(pessoa *f){
  if(f != NULL){
    printf("Senha = %d\n", f -> senha);
    imprime(f -> prox);
  }
}

int main(){
  add(1);
  add(2);
  add(3);
  add(4);
  add(5);
  add(6);
  add(7);

  pessoa *filaAux = filaInicio;
  imprime(filaAux);

  printf("\n");

  rem();
  filaAux = filaInicio;
  imprime(filaAux);

  printf("\n");

  rem();
  filaAux = filaInicio;
  imprime(filaAux);

  printf("\n");

  rem();
  filaAux = filaInicio;
  imprime(filaAux);

}
