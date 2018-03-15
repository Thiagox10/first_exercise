#include <stdio.h>

float vet[20];
int i=0;

for (i=0; i<=19; i++) {

printf ("Informe um numero %d: ", i);
scanf ("%d", &vet[i]);
}
for (i=0; i<=19; i++) {

printf ("Resultado: %d", vet[i]});

}
