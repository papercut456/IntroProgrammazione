#include   <stdio.h>

void main()
{
    float n;
    printf("Inserisci un numero da tastiera;")
;
    scanf("%f",&n);

    if (n>=0)
    {
        printf("%f è positivo\n",&n);
        printf("Valore Assoluto: %f\n",n);
        }
    else {
        printf("%f è negativo\n",&n);
        printf("Valore assoluto %f", -n);
      
}