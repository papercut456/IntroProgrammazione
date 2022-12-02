#include <stdio.h>
#include <stdlib.h>

int cerca_elemento(int a[], int start, int finish, int elem){
    for(int i = start; i<=finish; i++)
        if(a[i]==elem){
            return 1;
        }
}

int quanti_diversi(int a[], int n) {
    int k=0;
    for(int i=0; i<n; i++){
        int trovato = cerca_elemento(a, 0, i-1, int elem);
        if(trovato == 0){
            k++; 
            }
        
    }
    return k;
}

int * senza_duplicati(int a[], int n){
    int k = quanti_diversi(a,n);
    int * b =(int *) malloc(sizeof(int) * k);
    int w = 0;
    for(int i = 0; i < n; i++){
        int trovato = cerca_elemento(a, 0, i-1, a[i]);
        if(trovato == 0){
            b[w] = a[i];
            w++;
        }
    }
    return b;
}