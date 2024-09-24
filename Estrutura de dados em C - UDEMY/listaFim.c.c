#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};
typedef struct ponto Ponto;

Ponto *listaPonto;

void addFim(float x, float y){
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  p -> prox = NULL;
  if (listaPonto == NULL){
    listaPonto = p;
  }
  else {
    Ponto *listaAux = listaPonto;
    while (listaAux -> prox != NULL){
      listaAux = listaAux -> prox;
    }
    listaAux -> prox = p;
  }
}

void imprime(Ponto *elemento){
 if(elemento != NULL){
   printf("\nPonto: (%0.f , %0.f)",elemento->x, elemento->y);
   imprime(elemento->prox);
 }
}

int main() {
  int i = 0;
  addFim(1, 6);
  addFim(3, 8);
  addFim(5, 2);
  addFim(7, 14);
  addFim(8, 16);

  Ponto *auxLista = listaPonto;
  imprime(auxLista);
 
}
