int main(void)

{

    int n;

    int k;

    int c=0;

    printf("Questo programma calcola un coefficiente binomiale\n");

    printf("Inserisi n ");

    scanf("%d" ,&n);

    printf("Inserisci k ");

    scanf("%d" ,&k);

    

    for (int i=0; i<n; i++)

    {
        n=n*n;


    for (int i=0; i<k; i++)

    {
        k=k*(n-k);
        
    }

    c=n/k;
        
    printf ("Il coefficiente binomiale di %d su %d è : %d", )
    
}