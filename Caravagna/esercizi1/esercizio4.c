#include <stdio.h>

void main() {

 int x=1, i;
 float somma=0;

while (x!=0)
    {
     printf("Inserisci il numero (x_%d): ", i);
     scanf("%d",&x);
     somma = somma + x;
     i=i+1;
 }
printf("La media è %f:\n", somma/i);
    }

/*



 for(int i=0; i<3; i++)
 {
     printf("Inserisci il numero (x_%d): ", i);
     scanf("%d",&x);
     somma = somma + x;
 }
printf("La media è %f:\n", somma/3);
    }

*/