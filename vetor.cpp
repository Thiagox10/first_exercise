#include <stdio.h>

int vet[20];

int main(){
	
for (int i=0; i<=19; i++) {

printf ("Informe o numero da posição", i);
scanf ("%d", &vet[i]);
}
for (int i=0; i<=19; i++) {

printf ("Resultado[%d]: %d\n",i,vet[i]);

}
}
