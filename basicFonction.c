#include <stdio.h>
#include <math.h>

void HelloWorld() { // void signifie vide la fonction n'a pas de valeur de retour 
                  // on nomme la fonction par HelloWorld en n'oubliant pas les accolades
    printf("Bonjour tout le monde\n");
    //return; est faculatif
}
int Calculatrice(){    
    int q=0; // la variable q (pour question) est initialisé à 0

    printf("Vous voici dans la calculatrice 2.0\n\n");
    printf("Tapez la valeur: 1 addition / 2 soustraction / 3 multiplication / 4 division \n\n");
    scanf ("%d", &q); 
    
    if (q==1) {
        return additionCalc();
    } else if (q==2) {
        return soustractionCalc();
    } else if (q==3) {
        return multiplicationCalc();
    } else if  (q==4) {
        return divisionCalc();
    }
  // Si la réponse de l'utilisateur est "1" alors  l'utilisateur est dirigé à la fonction additionCalc
  // Si la réponse de l'utilisateur est "2" alors  l'utilisateur est dirigé à la fonction soustractionCalc 
  // Si la réponse de l'utilisateur est "3" alors  l'utilisateur est dirigé à la fonction multiplicationCalc 
  // Si la réponse de l'utilisateur est "4" alors  l'utilisateur est dirigé à la fonction divisionCalc 

}
int additionCalc(){
    int v1;
    int v2;
    int add;

    v1=0;
    v2=0;


   

    printf("Additionnez deux valeurs\n\n");
    printf("première valeur : ");
    scanf("%d", &v1);
    printf("seconde valeur : ");
    scanf("%d", &v2);
    add =v1+v2;
    printf(" résultat ...:%d\n",add);
}

int soustractionCalc(){
    int v1;
    int v2;
    int sub;

    v1=0;
    v2=0;


   

    printf("Soustrayez deux valeurs\n\n");
    printf("première valeur : ");
    scanf("%d", &v1);
    printf("seconde valeur : ");
    scanf("%d", &v2);
    sub=v1-v2;
    printf("résultat ... :%d\n",sub);
}

int multiplicationCalc(){
    int v1;
    int v2;
    int mul;

    v1=0;
    v2=0;


    

    printf("Multipliez deux valeurs\n\n");
    printf("première valeur : ");
    scanf("%d", &v1);
    printf("seconde valeur : ");
    scanf("%d", &v2);
    mul = v1 * v2;
    printf("résultat ... :%d\n", mul);
}

int divisionCalc(){
    int v1;
    int v2;
    int div;

    v1=0;
    v2=0;


    

    printf("Divisez deux valeurs\n\n");
    printf("première valeur : ");
    scanf("%d", &v1);
    printf("seconde valeur : ");
    scanf("%d", &v2);
    div = v1 / v2;
    printf("résultat ... :%d\n", div);
}

int main() {

    HelloWorld(); // Lance la fonction simple HelloWorld
    Calculatrice();  // Lance la fonction Calculatrice
    
    return 0;
}
