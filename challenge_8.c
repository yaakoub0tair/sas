#include <stdio.h>
#include <math.h>
int main(){
     double nb1,nb2,nb3,moyenne;
    printf("saisir votre 1er nombre :\n");
    scanf("%lf",&nb1);

    printf("saisir votre 2ème nombre :\n");
    scanf("%lf",&nb2);

    printf("saisir votre 3ème nombre :\n");
    scanf("%lf",&nb3);   
    moyenne=sqrt(nb1*nb2*nb3);
    printf("votre moyenne est :%.2lf",moyenne);



    return 0;
}