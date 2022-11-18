#include <stdio.h>

int x,y,z;

int minimo_3(int x,int y,int z){
        
    printf("Inserisci il numero (x): \n");
    scanf ("%d",&x);
    printf("Inserisci il numero (y): \n");
    scanf ("%d",&y);
    printf("Inserisci il numero (z): \n");
    scanf ("%d",&z);

    if (x<y && x<z)
        printf("il minimo è -> %d\n",x);
    if (y<x && y<z)
        printf("il minimo è -> %d\n",y);
    if (z<x && z<y)
        printf("il minimo è -> %d\n",z);
    }

void main(){
    int minimo_3();
}
