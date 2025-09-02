#include <stdio.h>

int main() {
    double Km;
    

    printf("donner la distance en kilomètres :\n");
    scanf("%lf",&Km);
    double Yards = Km * 1093.61;
    printf(" la transforme en  yards.: %.2f",Yards);


    return 0;
}