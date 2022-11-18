#include <stdio.h>
#include <math.h>

double distanza(double x1, double y1, double x2, double y2)
{
    double diff1, diff2, sum;
    diff1=x1-x2;
    diff2=y1-y2;
    diff1=diff1*diff1;
    diff2=diff2*diff2;
    double distanza = sqrt(sum);
    return distanza;
    }

int main(){

    double x1,y1,x2,y2;
    
    printf("Inserire le coordinate (x1,y1) e (x2,Y2)");
 
    printf("Inserisci coordinata (x1): \n");
    scanf ("%lf",&x1);
    printf("Inserisci il numero (y1): \n");
    scanf ("%lf",&y1);
    printf("Inserisci coordinata (x2): \n");
    scanf ("%lf",&x2);
    printf("Inserisci il numero (y2): \n");
    scanf ("%lf",&y2);

    double dist=distanza(x1,y1,x2,y2);

    printf("La distanza é: %lf\n",dist);
    }
    
