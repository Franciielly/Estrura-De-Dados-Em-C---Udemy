#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};
typedef struct ponto Ponto;

Ponto *listaPonto;

int length = 0;
void addIndex(float x, float y,  int index){
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  if(index>length){
    printf("Posição inválida");
  }
  else {
    if (index == 0){
      p -> prox = listaPonto;
      listaPonto = p;
    }
    else{
      int i = 0;
      Ponto *listaAux = listaPonto;
      while (i != index-1) {
        listaAux = listaAux -> prox;
        i++;
      }
      p->prox = listaAux->prox;
      listaAux -> prox = p;
    }
    length++;
  }

} 

void excluirIndex(int index){
  if(index>length || length == 0){
    printf("Posição inválida ou vazia.");
  }
  else{
    if(index == 0){
      listaPonto = listaPonto -> prox;
    }
    else{
      int i = 0;
      Ponto *listaAux = listaPonto;
      while(i != index -1){
        listaAux = listaAux -> prox;
        i ++;
      }
      listaAux -> prox = listaAux -> prox -> prox;
    }
    length --;
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
  addIndex(1, 6, 0);
  addIndex(4, 8, 1);
  addIndex(6, 9, 2);
  imprime(listaPonto);
  printf("\n");
    
  excluirIndex(2);
  excluirIndex(0);
  
  Ponto *auxLista = listaPonto;
  imprime(auxLista);
  return 0;
}
