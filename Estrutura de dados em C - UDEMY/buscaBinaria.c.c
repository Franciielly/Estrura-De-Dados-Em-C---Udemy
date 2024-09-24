#include <stdio.h>

int v[100];

int main(void) {
	int num;
	int i;
	
	for(i=0;i<100;i++)
	{
		v[i] = i + 1;
	}
	
	printf("Digite um numero de 0 a 100: ");
	scanf("%d", &num);

	int comparacoes = 0;

	int continuar = 1;

	int ini = 0;
	int fim = 99;

	while(continuar == 1)
	{
		comparacoes++;
		int pivo = (ini + fim) / 2;
		if(v[pivo] == num){
			printf("Elemento encontrado\n");
			continuar = 0;
		}
		else{
			if(num > v[pivo]){
				ini = pivo + 1;
			}
			else{
				fim = pivo - 1;
			}
		}

		if(fim < ini)
		{
			printf("Elemento nao encontrado\n");
			continuar = 0;
		}
	}

	printf("Comparacoes: %d\n",comparacoes);

	return 0;
}