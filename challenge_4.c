#include <stdio.h>
int main (){
    double Km;
    

    printf("donner la la vitesse en kilomètres par heure (km/h) :\n");
    scanf("%lf",&Km);
    double ms = Km * 0.27778;
    printf("  la transforme de %.2lf (km/h) en mètres par seconde (m/s): %.2f",Km,ms);


    return 0;
}