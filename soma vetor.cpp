#include <stdio.h>
#define max 15

int valores [max];
int soma=0;

int main(){
	
	for (int i = 0; i<max ; i++){
		printf ("Digite o numero da posi�ao [%d]",i);
		scanf ("%d",&valores[i]);
		soma = soma + valores[i];
	}
	printf ("Resultado Soma: %d",soma);
}
