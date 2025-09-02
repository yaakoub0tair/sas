#include <stdio.h>
int main(){
    double nb1,nb2,nb3,moyenne;
    printf("saisir votre 1er nombre de  coefficient 2:\n");
    scanf("%lf",&nb1);

    printf("saisir votre 2ème nombre de coefficient 3:\n");
    scanf("%lf",&nb2);

    printf("saisir votre 3ème nombre de coefficient 5:\n");
    scanf("%lf",&nb3);   
    moyenne=(nb1*2+nb2*3+nb3*5)/(2+3+5);
    printf("votre moyenne est :%.2lf",moyenne);









    return 0;
}