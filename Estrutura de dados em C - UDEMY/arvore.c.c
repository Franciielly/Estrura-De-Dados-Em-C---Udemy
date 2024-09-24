#include <stdio.h>
#include <stdlib.h>

struct Nodo{
  int valor;
  struct Nodo *direita;
  struct Nodo *esquerda;
};

typedef struct Nodo nodo;

nodo* create(int valor){
  nodo *n = malloc(sizeof(nodo));
  n -> valor = valor;
  n -> direita = NULL;
  n -> esquerda = NULL;
  return n;
}

void imprimir (nodo *n){
  if (n == NULL){
    return;
  }
  printf("%d\n", n -> valor);
  imprimir(n -> direita);
  imprimir(n -> esquerda);
}

int main (){
  nodo *n5 = create(5);
  nodo *n2 = create(2);
  nodo *n1 = create(1);
  nodo *n8 = create(8);
  nodo *n4 = create(4);

  n5 -> esquerda = n2;
  n2 -> esquerda = n1;
  n5 -> direita = n8;
  n2 -> direita = n4;

  imprimir(n5);
}

