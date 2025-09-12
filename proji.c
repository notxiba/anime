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

void ajout_one();
void ajout();
void ajout_plu();
void affich();
void affich_alphabi();
void affiche_age();
void affiche_poust();
void Modifier();
void Modifier_poste();
void Modifier_age();
void Modifier_buts();
void suppremi();
void recherche();
void recherche_id();
void recherche_name();
void statistique();
void statunombre();
void agem();
void plusbuts();
void buteur();
void stage();
int main()
{
    int choice;
    do
    {
        printf("1, ajouter un contact\n2, Afficher la liste de tous les joueurs\n3, modifier un contact\n4, supprimer un contact\n5, rechercher un contact\n6, Statistiques\n0, entri pur sourti\n");
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
            Modifier();

            break;
        case 4:
            suppremi();

            break;
        case 5:
            recherche();
            break;
        case 6:
            statistique();
            break;
        default:
            break;
        }
    } while (choice != 0);
}

void ajout()
{
    int ajo;

    printf("1, Ajouter un nouveau joueur\n2, Ajouter plusieurs joueurs.\n0 bak to monu\n");
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
}
void ajout_one()
{

    if (player >= MAX)
    {
        printf("bas de donne plan");
        return;
    }

    printf("### le nom  ###\n");

    printf("entre le nom: \n");
    scanf("%s", joueurs[0].name);

    printf("### prenome ###\n");
    printf("entre le prenom:  \n");
    scanf("%s", joueurs[0].prenom);
    printf("### poste ###\n");
    printf("entre poste : \n");
    scanf("%s", joueurs[0].poste);
    printf("### numeroMaillot ###\n");
    printf("entre numeroMaillot : \n");
    scanf("%d", &joueurs[0].numeroMaillot);
    printf("### age ###\n");
    printf("entre age : \n");
    scanf("%d", &joueurs[0].age);
    printf("### buts ###\n");
    printf("entre buts : \n");
    scanf("%d", &joueurs[0].buts);

    srand(time(NULL));
    joueurs[0].id = rand() % 1000 + 1000;
    player++;
}

void ajout_plu()
{

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
        scanf("%s", joueurs[i].name);

        printf("### prenome ###\n");
        printf("entre le prenom:  \n");
        scanf("%s", joueurs[i].prenom);
        printf("### poste ###\n");
        printf("entre  poste: \n");
        scanf("%s", joueurs[i].poste);
        printf("### numeroMaillot ###\n");
        printf("entre numeroMaillot : \n");
        scanf("%d", &joueurs[i].numeroMaillot);
        printf("### age ###\n");
        printf("entre age : \n");
        scanf("%d", &joueurs[i].age);
        printf("### buts ###\n");
        printf("entre buts : \n");
        scanf("%d", &joueurs[i].buts);
        joueurs[i].id = rand() % 1000 + 1000;
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
            affiche_age();

            break;
        case 3:
            affiche_poust();

            break;
        default:
            break;
        }
    } while (affich != 0);
}
void affich_alphabi()
{

    int jo;
    for (int i = 0; i < jo - 1; i++)
    {
        for (int j = i + 1; j < jo; j++)
        {
            if (strcmp(joueurs[i].name, joueurs[j].name) > 0)
            {
                char cmmp[15];
                strcpy(cmmp, joueurs[i].name);
                strcpy(joueurs[i].name, joueurs[j].name);
            }
        }
    }
    printf("___#liste nom de joueur#___");
    for (int i = 0; i < player; i++)
    {
        printf("id: %d\n le nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot%d\n age%d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
    }
}
void affiche_age()
{

    for (int i = 0; i < player - 1; i++)
    {
        for (int j = i + 1; j < player; j++)
        {
            if (joueurs[i].age > joueurs[j].age)
            {
                struct fot cmmp;
                joueurs[i] = joueurs[j];
                joueurs[j] = cmmp;
            }
        }
    }
    printf("___#liste nom de joueur#___");
    for (int i = 0; i < player; i++)
    {
        printf("id: %d\n le nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot%d\n age%d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
    }
}
void affiche_poust()
{
    for (int i = 0; i < player - 1; i++)
    {
        for (int j = i + 1; j < player; j++)
        {
            if (strcmp(joueurs[i].poste, joueurs[j].poste) > 0)
            {
                char cmmp[15];
                strcpy(cmmp, joueurs[i].poste);
                strcpy(joueurs[i].poste, joueurs[j].poste);
            }
        }
    }
    printf("___#liste nom de joueur#___");
    for (int i = 0; i < player; i++)
    {
        printf("id: %d\n le nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot%d\n age%d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
    }
}
void Modifier()
{
    int modifier;
    do
    {
        printf("1, Modifier le poste d_un joueur.\n2, Modifier l_âge d_un joueur.\n3, Modifier le nombre de buts marqués par un joueur.\n0 bak to monu\n");
        scanf("%d", &modifier);
        switch (modifier)
        {
        case 1:
            Modifier_poste();

            break;
        case 2:
            Modifier_age();

            break;
        case 3:
            Modifier_buts();

            break;
        default:
            break;
        }
    } while (modifier != 0);
}
void Modifier_poste()
{
    int id;
    char nouvo_post[MAX];
    int i;
    printf("entre actual id:  \n");
    scanf("%d", &id);
    for (i = 0; i < player; i++)
    {
        if (joueurs[i].id == id)
        {
            printf("entre nouvo post: \n");
            scanf("%s", nouvo_post);
            strcpy(joueurs[i].poste, nouvo_post);
        }
    }
}
void Modifier_age()
{
    int id, nouv_age;
    int i;
    printf("entre actual age \n");
    scanf("%d", &id);
    for (i = 0; i < player; i++)
    {
        if (joueurs[i].id == nouv_age)
        {
            printf("entre nouvo age: \n");
            scanf("%d", &nouv_age);
            joueurs[i].age = id;
        }
    }
}
void Modifier_buts()
{
    int id, novou_buts;
    int i;
    printf("entre actual buts \n");
    scanf("%d", &id);
    for (i = 0; i < player; i++)
    {
        if (joueurs[i].id == novou_buts)
        {
            printf("entre nouvo buts: \n");
            scanf("%d", &novou_buts);
            joueurs[i].buts = novou_buts;
        }
    }

    printf("\n le nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot%d\n age%d\nbuts%d\n", joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
}
void suppremi()
{
    int n;
    int id;
    printf("entre id pour supprem: \n");
    scanf("%d", &id);
    for (int i = 0; i < n; i++)
    {
        if (joueurs[i].id == id)
        {
            for (int j = 0; j < n - 1; j++)
            {
                joueurs[j] = joueurs[j + 1];
            }
            n--;
            printf("la joueur est suppremi");
        }
    }
}
void recherche()
{
    int recherche;
    do
    {
        printf("1, Rechercher un joueur par Identifiant\n2, Rechercher un joueur par Nom");
        scanf("%d", &recherche);
        switch (recherche)
        {
        case 1:
            recherche_id();

            break;
        case 2:
            recherche_name();

            break;
        default:
            break;
        }

    } while (recherche != 0);
}
void recherche_id()
{
    int rid;
    printf("entre id pour recherche: \n");
    scanf("%d", &rid);
    for (int i = 0; i < player; i++)
    {
        if (joueurs[i].id == rid)
        {

            printf("id: %d\nle nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot: %d\nage: %d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
        }
    }
}
void recherche_name()
{
    char rnam[MAX];
    printf("entre le nome: \n");
    scanf("%s", rnam);
    for (int i = 0; i < player; i++)
    {
        if (strcmp(joueurs[i].name, rnam) == 0)
        {
            printf("id: %d\nle nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot: %d\nage: %d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
        }
    }
}
void statistique()
{
    int statistique;
    do
    {
        printf("1, Afficher le nombre total de joueurs dans l_équip\n2, Afficher l_âge moyen des joueurs\n3, Afficher les joueurs ayant marqué plus de  buts\n4, Afficher le meilleur buteur\n5, Afficher le joueur le plus jeune et le plus âgé\n");
        scanf("%d", &statistique);
        switch (statistique)
        {
        case 1:

            break;
        case 2:
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
    } while (statistique != 0);
}
void statunombre()
{
    printf("le nomber toutal est: %d\n", player);
}
void agem()
{
    int p;
    for (int i = 0; i < player; i++)
    {
        p += joueurs[i].age;
        p = p / player;
        printf("lamwayane de lage est: %d\n", p);
    }
}
void plusbuts()
{
    int x;
    printf("entre x buts: ");
    scanf("%d", &x);
    for (int i = 0; i < player - 1; i++)
    {
        if (joueurs[i].buts > x)
        {
            printf("id: %d\nle nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot: %d\nage: %d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
        }
    }
}
void buteur()
{
    int b;
    for (int i = 0; i < player; i++)
    {
        if(joueurs[i].buts<b){
            printf("id: %d\nle nom: %s\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].buts);
        }
        
    }
    
}
void stage()
{
    for (int i = 0; i < player - 1; i++)
    {
        for (int j = i + 1; j < player; j++)
        {
            if (joueurs[i].age > joueurs[j].age)
            {
                struct fot cmmp;
                joueurs[i] = joueurs[j];
                joueurs[j] = cmmp;
            }
        }
    }
    for (int i = 0; i < player; i++)
    {
        printf(" le nom: %s\nla age%d", joueurs[i].name, joueurs[i].age);
    }
    for (int i = 0; i < player - 1; i++)
    {
        for (int j = i + 1; j < player; j++)
        {
            if (joueurs[i].age > joueurs[j].age)
            {
                struct fot cmmp;
                joueurs[i] = joueurs[j];
                joueurs[j] = cmmp;
            }
        }
    }
    for (int i = 0; i < player; i++)
    {
        printf(" le nom: %s\nla age%d", joueurs[i].name, joueurs[i].age);
    }
}
