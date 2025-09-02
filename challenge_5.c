#include <stdio.h>
int main(){
double temp;
printf(" entrer la temperature saisie en celsius :\n");
scanf("%lf",&temp);
if (temp<0)
{
   printf("l'etat de l'eau est : solide (glace)");
}else if (temp>=0&&temp<100)
{
    printf("l'etat de l'eau est : liquide (eau)");
}else{

    printf("l'etat de l'eau est : gaz (vapeur) ");
}





return 0;
}