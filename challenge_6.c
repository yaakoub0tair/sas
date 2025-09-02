#include <stdio.h>

int main (){
    double nb1, nb2;
    char op;

    printf("saisir votre premier nombre:\n");
    scanf("%lf",&nb1);

    printf("saisir votre deuxieme nombre:\n");
    scanf("%lf",&nb2);

    printf("saisir votre operation (-,+,*,/):\n");
    scanf(" %c",&op);   

    if (op=='-') {
        printf("%.2lf\n", nb1-nb2);

    } else if (op=='+') {
        printf("%.2lf\n", nb1+nb2);

    } else if (op=='*') {
        printf("%.2lf\n", nb1*nb2);

    } else if (op=='/') {
        if (nb2==0) {
            printf("erreur : impossible la division par 0\n");
        } else {
            printf("%.2lf\n", nb1/nb2);
        }

    } else {
        printf("operation non valide\n");
    }
    /*
    si en veut l'affiche de tout les operation
    printf("a+b:%.2lf\n a-b:%.2lf\n a*b:%.2lf \n",nb1+nb2,anb1-nb2,nb1*nb2);
    if (nb2==0)
    {
        printf("erreur : impossible la devision par 0");
    }else {
        printf("a/b:%.2lf",nb1/nb2);
    }*/

    return 0;
}
