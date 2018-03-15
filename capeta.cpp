#include <stdio.h>
//FUNCIONANDO//

float media2;


int main(){

float nota[9];

int i;
media2=0;

for (i=0; i<=8; i++) {
printf ("Digite a nota:" );
scanf ("%f", &nota[i]);
printf ("%.2f",nota[i]);
media2 += nota[i];
printf ("Media: %.2f\n", media2);
}
media2 = media2/9;
printf ("media:%.2f ",media2);

return 0;
}
