#include <stdio.h>
int main(){
    double surface,longueur,largeur;
    printf("saisir la longueur de rectangle :\n");
    scanf("%lf",&longueur);
    printf("saisir la largeur de rectangle :\n");
    scanf("%lf",&largeur);
    surface = longueur * largeur;
    printf("la surface de ce rectangle est :%.2lf",surface);










    return 0;
}