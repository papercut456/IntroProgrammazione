#include <stdio.h>

void main()
{
/* 
dichiariamo la variabile n
numero elementi da considerare
Stampare i quadrati perfetti da 1 ad n
*/
    int n;
    printf("Inserire il valore di n:");
    scanf ("%d",&n);

    printf("Ti stamperò i quadrati perfetti fino a %d\n", n);

    int sq;
    for(int i = 1; i <= n ; i++ ) 
    {
        sq=i*i;
        printf("Il quadrato di %d è %d\n",i,sq);
    }

    
}

