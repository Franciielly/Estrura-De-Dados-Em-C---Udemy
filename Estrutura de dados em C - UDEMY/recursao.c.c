#include<stdio.h> 

int potencia(int base, int ex){
  if (ex == 1){
    return base;
  }
  return base*potencia(base, ex-1);
}

int main() {
  int base, expoente;
  printf("Digite a base da potência: ");
  scanf("%d", &base);
  printf("Digite o expoente da potência: ");
  scanf("%d", &expoente);

  int resultado = potencia(base, expoente);

  printf("O resultado de %d elevado a %d = %d ", base, expoente,resultado);
}