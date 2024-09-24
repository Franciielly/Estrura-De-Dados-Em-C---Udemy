#include <stdio.h>

int main(){
    int n, i =0, numeroB, aux = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int numeros[n];
    
    while (i < n){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        
        i++;
    }
    
    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &numeroB);
    
    while(aux < n){
       if (numeros[aux] == numeroB){
           printf("Numero encontrado na posicao: %d\n", aux);
       }
      aux++;
    }
    printf("Numero nao encontrado\n");
}
