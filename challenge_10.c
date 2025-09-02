#include <stdio.h>
#include <math.h>
int main(){
    double r,volume;
   
    printf(" donner le rayon de la sphère\n");
    scanf("%lf",&r);
    volume=(4.0/3.0)*M_PI*pow(r, 3);
    printf("Le volume de la sphere est : %.2lf\n", volume);
    








    return 0;
}