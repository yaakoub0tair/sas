#include <stdio.h>

int main() {
    double C;
    

    printf("donner la température en Celsius :\n");
    scanf("%lf",&C);
    double K = C + 273.15;
    printf(" la température en Kelvin: %.2f",K);


    return 0;
}