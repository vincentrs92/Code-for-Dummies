#include <stdio.h> //en-tête de la bibliothèque standard du C


int main(){  //déclaration de la fonction main
    int i,f; //déclaration des variables i et f sont des entiers    
    int resl; //déclaration de la variable resl
    
    i = 0; //initialisation de i par défaut 0
    f = 0; //initialisation de f

    printf("L'affichage simple' :\n\n"); /* affichage du message et 2 sauts de lignes */
    printf("saisissez la première valeur: ");  /* instruction à l'utilisateur */
    scanf("%d", &i); 
    //scan de la saisie qui doit être une valeur décimale et 
    //intitialisation de la valeur de l'utilisateur à la variable i
    printf("\n"); /* saut de ligne */
    printf("saisissez la deuxième valeur: ");
    scanf("%d", &f);
    printf("Votre première valeur = %d\n",i);
    printf("Votre seconde valeur = %d\n", f);
    
    return 0;
}
