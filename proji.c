#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
int player = 0;
struct fot
{
    int id;
    char name[MAX];
    char prenom[MAX];
    char poste[MAX];
    int numeroMaillot;
    int age;
    int buts;
};
struct fot joueurs[MAX];
struct fot f[MAX];

void ajout_one();
void ajout();
void ajout_plu();
void affich();
void affich_alphabi();
int main() {
    int choice;
    do
    {
        printf("1, ajouter un contact\n2, Afficher la liste de tous les joueurs\n3, modifier un contact\n4, supprimer un contact\n5, rechercher un contact\n0, entri pur sourti\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ajout();

            break;
        case 2:
         affich();


            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        default:
            break;
        }
    } while (choice != 0);
}


 void ajout(){
    int ajo;
    do
    {
        printf("1, Ajouter un nouveau joueur\n2, Ajouter plusieurs joueurs.\n0 bak to monu");
        scanf("%d", &ajo);
        switch (ajo)
        {
        case 1:
            ajout_one();
            break;
        case 2:
            ajout_plu();

            break;
        default:
            break;
        }
    } while (ajo != 0);
}
void ajout_one()
{

    struct fot f;
     if (player >= MAX)
     {
         printf("bas de donne plan");
         return ;
     }
    printf("### le nom  ###\n");

    printf("entre le nom: \n");
    scanf("%s", f.name);

    printf("### prenome ###\n");
    printf("entre le prenom:  \n");
    scanf("%s", f.prenom);
    printf("### poste ###\n");
    printf("entre poste : \n");
    scanf("%s", f.poste);
    printf("### numeroMaillot ###\n");
    printf("entre numeroMaillot : \n");
    scanf("%d", &f.numeroMaillot);
    printf("### age ###\n");
    printf("entre age : \n");
    scanf("%d", &f.age);
    printf("### buts ###\n");
    printf("entre buts : \n");
    scanf("%d", &f.buts);
    
    // srand(time(NULL));
}
void ajout_plu()
{
    struct fot f[MAX];
    int n;
    printf("entre le nombe de  joueur qui ajout");
    scanf("%d", &n);
    if (player >= MAX)
    {
        printf("bas de donne plan");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        printf("### le nom  ###\n");
        printf("entre le nom: \n");
        scanf("%s", f[i].name);

        printf("### prenome ###\n");
        printf("entre le prenom:  \n");
        scanf("%s", f[i].prenom);
        printf("### poste ###\n");
        printf("entre  poste: \n");
        scanf("%s", f[i].poste);
        printf("### numeroMaillot ###\n");
        printf("entre numeroMaillot : \n");
        scanf("%d", &f[i].numeroMaillot);
        printf("### age ###\n");
        printf("entre age : \n");
        scanf("%d", &f[i].age);
        printf("### buts ###\n");
        printf("entre buts : \n");
        scanf("%d", &f[i].buts);
         f[i].id = rand() % 1000 + 1000;
    player++;
    }
}

void affich()
{
    int affich;
    do
    {
        printf("1,Trier les joueurs par ordre alphabétique\n2,Trier les joueurs par âge..\n3,Afficher les joueurs par poste.\n0 bak to monu\n");
        scanf("%d", &affich);
        switch (affich)
        {
        case 1:
         affich_alphabi();

            break;
        case 2:

            break;
        default:
            break;
        }
    } while (affich != 0);
}
void affich_alphabi()
{
    struct fot cmp;

    int jo;
    for (int i = 0; i < jo - 1; i++)
    {
        for (int j = i + 1; j < jo; j++)
        {
            if (strcmp(joueurs[i].name, joueurs[j].name) > 0)
            {
                joueurs[i] = joueurs[j];
                joueurs[j] = cmp;
            }
        }
    }
    printf("___#liste nom de joueur#___");
    for (int i = 0; i < jo; i++)
    {
        printf("\n le nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot%d\n age%d\nbuts%d\n", cmp.name, f[i].prenom, f[i].poste, f[i].numeroMaillot, f[i].age, f[i].buts);
    }
}
