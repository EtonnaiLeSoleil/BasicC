#include <stdio.h>

// Déclaration globale des compteurs
int cyber = 0;
int cloud = 0;
int data = 0;
int other = 0;

// Fonction pour afficher les compteurs actuels
void whatIsTheActualCount() {
    printf("########################################\n");
    printf("c Cyber = %d\n", cyber);
    printf("l Cloud = %d\n", cloud);
    printf("d Data  = %d\n", data);
    printf("o Other = %d\n", other);
    printf("########################################\n");
}

int main() {
    char letter;

    printf("Compteur ! (tapez 'a' pour arrêter) :\n");

    do {
        printf("\nVeuillez choisir une lettre (c, l, d, o, a) : ");
        scanf(" %c", &letter); // <-- l’espace avant %c est important pour ignorer les retours à la ligne

        switch (letter) {
            case 'c':
                cyber++;
                whatIsTheActualCount();
                break;
            case 'l':
                cloud++;
                whatIsTheActualCount();
                break;
            case 'd':
                data++;
                whatIsTheActualCount();
                break;
            case 'o':
                other++;
                whatIsTheActualCount();
                break;
            case 'a':
                whatIsTheActualCount();
                {
                    int end = cyber + cloud + data + other;
                    printf("Total count = %d\n", end);
                    printf("END\n");
                }
                break;
            default:
                printf("Choix invalide !\n");
                break;
        }

    } while (letter != 'a');

    return 0;
}
