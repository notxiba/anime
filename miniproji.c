#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 50

int main()
{
    char Titre[MAX_BOOKS][MAX_BOOKS] = {"ali", "youssef"};
    char Auteur[MAX_BOOKS][MAX_BOOKS];
    float Prix[MAX_BOOKS];
    int Quantite[MAX_BOOKS];

    int chowse;
    printf("1_Ajouter un livre au stock\n2_Afficher tous les livres disponibles\n3_Rechercher un livre par son titre\n");
    printf("4_Mettre à jour la quantité d'un livre\n5Supprimer un livre du stock\n6_Afficher le nombre total de livres en stock\n");
    scanf("%d", &chowse);
    switch (chowse)
    {
    case 1:
        printf("entre le nom de livre\n");
        for (int i = 2; i < 4; i++)
        {
            printf("entre le nam: ");
            scanf("%s", Titre[i]);
        }
        printf("entre le auteur de livre\n");
        for (int j = 0; j < 4; j++)
        {
            printf("entre le auteur: ");
            scanf("%s", Auteur[j]);
        }
        printf("entre le prix de livre\n");
        for (int z = 0; z < 4; z++)
        {
            printf("entre le prix: ");
            scanf("%f", &Prix[z]);
        }
        printf("entre le Quantit de livre\n");
        for (int b = 0; b < 4; b++)
        {
            printf("entre le Quantite: ");
            scanf("%d", &Quantite[b]);
        }
        goto affiche;
        break;
    case 2:
    affiche:
        for (int f = 0; f < 3; f++)
        {
            printf("______________________affiche___________________________________\n");
            printf("le tetre: %s \n le auteur: %s \n le prix de livre: %f \n Quantit de livre %d \n", Titre[f], Auteur[f], Prix[f], Quantite[f]);
        }
        case 3:
        char searcht[MAX_BOOKS];
            printf("Titre du livre: \n");
            getchar();
            fgets(searcht, sizeof(searcht), stdin);
            for (int i = 0; i < 3; i++)
            {
                if (strcmp(searcht, Titre[i]) == 0)
                {
                    printf("titre de livre : %s , nom de l'auteur : %s , le prix : %f , le quantite : %d \n", Titre[i], Auteur[i], Prix[i], Quantite[i]);
                }
            }
            break;
    }
}
