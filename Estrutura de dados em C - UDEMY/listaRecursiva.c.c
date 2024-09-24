#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};
typedef struct ponto Ponto;

Ponto *listaPonto;

void add(float x, float y){
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  p -> prox = listaPonto;
  listaPonto = p;
}

void imprime(Ponto *elemento){
 if(elemento != NULL){
   printf("\nPonto: (%0.f , %0.f)",elemento->x, elemento->y);
   imprime(elemento->prox);
 }
}

int main() {
  int i = 0;
  add(1, 6);
  add(3, 8);
  add(5, 2);

  Ponto *auxLista = listaPonto;
  imprime(auxLista);
  return 0;
}
