#include <stdio.h>

int main() {
    char choix;
    float a;
    float b;

    printf("Calculatrice simple \n veuillez choisire un type ope\nAddition \t +\nSoustraction \t - \nMultiplication \t * \nDivision \t /\n");
    scanf("%c", &choix);

    switch (choix) {
        case '+':
            printf("Vous avez choisi Addition\n veuillez choisire un premier nombre\n");
            scanf("%f", &a);
            printf("veuillez choisire un second nombre\n");
            scanf("%f", &b);
            printf("%f + %f",a,b);
            break;
        case '-':
            printf("Vous avez choisi Soustraction\nveuillez choisire un premier nombre\n");
            scanf("%f", &a);
            printf("veuillez choisire un second nombre\n");
            scanf("%f", &b);
            printf("%f - %f",a,b);
            break;
        case '*':
            printf("Vous avez choisi Multiplication.\nveuillez choisire un premier nombre\n");
            scanf("%f", &a);
            printf("veuillez choisire un second nombre\n");
            scanf("%f", &b);
            printf("%f * %f",a,b);
            break;
        case '/':
            printf("Vous avez choisi Division\nveuillez choisire un premier nombre\n");
            scanf("%f", &a);
            printf("veuillez choisire un second nombre\n");
            scanf("%f", &b);
            printf("%f / %f",a,b);
            break;
        default:
            printf("Choix invalide !\n");
    }

    return 0;
}
