#include <stdio.h>

int main() {
    int age;
    char  nom [30];
    char  prenom [30];
    char  sex [30];
    char  email [30];
    printf("entrer votre nom :\n entrer votre prenom :\nentrer votre sex :\nentrer votre age :\nentrer votre email :\n");
    //scanf("%s",&nom);
    //printf("entrer votre prenom :\n");
    //scanf("%s",&prenom);
    //printf("entrer votre sex :\n");
    //scanf("%s",&sex);
    //printf("entrer votre age :\n");
    //scanf("%d",&age);
    //printf("entrer votre email :\n");
    scanf("%s %s %s %d %s",&nom,&prenom,&sex,&age,&email);
    //scanf("%s",&prenom);
    //scanf("%s",&sex);
    //scanf("%d",&age);
    //scanf("%s",&email);
    printf("nom :%s , prenom :%s , age:%i , sex%s : , email :%s ",nom,prenom,age,sex,email);
    

    return 0;
}