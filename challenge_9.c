#include <stdio.h>
#include <math.h>
int main (){
    int x1,x2,y1,y2,z1,z2;
    

    printf("donner les cordonner de premier point x: ansi y: ansi z:\n(Après chaque saisie des coordonnées, appuyez sur la touche Entrée.) \n");
    scanf("%d %d %d",&x1,&y1,&z1);

    printf("donner les cordonner de deuxiem point x: ansi y: ansi z:\n(Après chaque saisie des coordonnées, appuyez sur la touche Entrée.) \n");
    scanf("%d %d %d",&x2,&y2,&z2);
    double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    printf("La distance entre les deux points est : %.2lf\n", distance);









    return 0;
}