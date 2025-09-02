#include <stdio.h>
int main(){
    int nb,i,j,binaire[64];
    printf("saisir un nembre entier :\n");
    scanf("%d",&nb);
    printf("la representation hexadecimale de le nombre %d est : %X\n",nb,nb);
    
    printf("la representation binaire de le nombre %d est :",nb);
    i=0;
    while(nb>0){
     
        binaire[i]=nb%2;
        nb=nb/2;
        i++;

    }
    for(j=i-1;j>=0;j--){
        printf("%d",binaire[j]);

    }



    return 0;
}