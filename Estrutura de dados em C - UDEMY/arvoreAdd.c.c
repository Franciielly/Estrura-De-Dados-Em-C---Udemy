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
  n -> esquerda = NULL;
  n -> direita = NULL;
  return n;
}

void add(nodo *n, int valor){
    if (valor < n-> valor){
        if (n -> esquerda == NULL){
            n -> esquerda = create(valor);
        }
        else{
            add(n -> esquerda, valor);
        }
    }
    else{
        if(n -> direita == NULL){
            n -> direita = create(valor);
        }
        else{
            add(n -> esquerda, valor);
        }
    }
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
    nodo *n = create(5);
    add(n,2);
    add(n,1);
    add(n,8);
    add(n,4);

  imprimir(n);
}
