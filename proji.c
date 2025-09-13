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
void choisir_poste();
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
    

    int idplayer[10]={1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010};
    char nomplayer[10][10]={"Hakim", "Achraf", "Riyad", "Sofiane", "Yassine", "Noussair", "Munir", "Amine", "Medhi", "Ayoub"};
    char prenomplayer[10][10]={"Ziyech","Hakimi","Mahrez", "Boufal", "Bounou", "Mazraoui", "El Haddadi", "Harit", "Benatia", "El Kaabi"};
    char postplayer[10][10]={ "Milieu", "Defenseur", "Attaquant", "Milieu", "Gardien", "Defenseur", "Attaquant", "Milieu", "Defenseur", "Attaquant"};
    int numerMailloplayer[10]={7, 2, 26, 10, 1, 12, 9, 8, 4, 11};
    int age[10]={29, 24, 31, 27, 32, 25, 27, 25, 35, 26};
    int buts[10]={5, 3, 12, 7, 0, 1, 9, 4, 2, 6};
    int choice;
    for(int i = 0; i < 10; i++) {
    joueurs[i].id = idplayer[i];
    strcpy(joueurs[i].name, nomplayer[i]);
    strcpy(joueurs[i].prenom, prenomplayer[i]);
    strcpy(joueurs[i].poste, postplayer[i]);
    joueurs[i].numeroMaillot = numerMailloplayer[i];
    joueurs[i].age = age[i];
    joueurs[i].buts = buts[i];
    player++;
}
    do
    {
        printf("1, ajouter un joueur\n2, Afficher la liste de tous les joueurs\n3, modifier un joueur\n4, supprimer un joueur\n5, rechercher un joueur\n6, Statistiques\n0, entri pur sourti\n");
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
    scanf("%s", joueurs[player].name);

    printf("### prenome ###\n");
    printf("entre le prenom:  \n");
    scanf("%s", joueurs[player].prenom);
    printf("### poste ###\n");
    printf("entre la post(Gardien, Defenseur, Milieu, Attaquant): \n");
    scanf("%s", joueurs[player].poste);
    printf("### numeroMaillot ###\n");
    printf("entre numeroMaillot : \n");
    scanf("%d", &joueurs[player].numeroMaillot);
    printf("### age ###\n");
    printf("entre age : \n");
    scanf("%d", &joueurs[player].age);
    printf("### buts ###\n");
    printf("entre buts : \n");
    scanf("%d", &joueurs[player].buts);

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
        printf("entre post(Gardien, Defenseur, Milieu, Attaquant): \n");
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
    struct fot tmp;
    for (int i = 0; i < player - 1; i++)
    {
        for (int j = 0; j < player - i - 1; j++)
        {
            if (strcmp(joueurs[j].name, joueurs[j+1].name) > 0)
            {
                
            

                tmp = joueurs[j];
                joueurs[j] = joueurs[j+1];
                joueurs[j+1]=tmp;
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
    char pos[][20]={"Gardien", "Defenseur", "Milieu", "Attaquant"};
      for (int i = 0; i < player - 1; i++) {
         for (int j = i + 1; j < player; j++) {
            if (joueurs[i].poste > joueurs[j].poste) {
                struct fot tmp = joueurs[i];
                joueurs[i] = joueurs[j];
                joueurs[j] = tmp;
            }
         }
     }

        
    
     printf("___#liste nom de joueur#___");
     for (int i = 0; i < player; i++)
     {
         printf("id: %d\n le nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot%d\n age%d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
     }


    for(int k =0 ; k < 4; k++)
    {
        for(int i = 0; i < player;i++)
        {
            if(strcmp(pos[k],joueurs[i].poste) == 0)
            {
                printf("id: %d\nNom: %s\nPrenom: %s\nPoste: %s\nNum Maillot: %d\nAge: %d\nButs: %d\n\n",
                       joueurs[i].id, joueurs[i].name, joueurs[i].prenom,
                       joueurs[i].poste, joueurs[i].numeroMaillot,
                       joueurs[i].age, joueurs[i].buts);
            }
        }
    }
}

void Modifier()
{
    int modifier;
    do
    {
        printf("1, Modifier le poste d_un joueur.\n2, Modifier l_âge d_un joueur.\n3, Modifier le nombre de buts marqués par un joueur.\n0 bak to monu\n0, munu\n");
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
    for (int i = 0; i < player; i++)
    {
        if (joueurs[i].id == id)
        {
            printf("Nouveau poste: "); scanf("%s", nouvo_post);
            strcpy(joueurs[i].poste, nouvo_post);
            printf("Poste modifié.\n");
            return;
        }
    }
    printf("Joueur introuvable.\n");
}


void Modifier_age()
{
    int id, nouv_age;
    int i;
    printf("entre actual age \n");
    scanf("%d", &id);
    for (i = 0; i < player; i++)
    {
        if (joueurs[i].id == id)
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
        if (joueurs[i].id == id)
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
    int id;
    int found = 0;
    printf("entre id pour supprem: \n");
    scanf("%d", &id);
    for (int i = 0; i < player; i++)
    {
        if (joueurs[i].id == id)
        {
            for (int j = 0; j < player - 1; j++)
            {
                joueurs[j] = joueurs[j + 1];
            }
            player--;
            found=1;
            break;
            printf("la joueur est suppremi");
        }
    }
}
void recherche()
{
    int recherche;
    do
    {
        printf("1, Rechercher un joueur par Identifiant\n2, Rechercher un joueur par Nom\n");
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
    int found=0;
    printf("entre id pour recherche: \n");
    scanf("%d", &rid);
    for (int i = 0; i < player; i++)
    {
        if (joueurs[i].id == rid)
        {

            printf("id: %d\nle nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot: %d\nage: %d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
     found=1;
     break;
        }
    }
}
void recherche_name()
{
    char rnam[MAX];
    int found=0;
    printf("entre le nome: \n");
    scanf("%s", rnam);
    for (int i = 0; i < player; i++)
    {
        if (strcmp(joueurs[i].name, rnam) == 0)
        {
            printf("id: %d\nle nom: %s\nle prenom: %s\nposte: %s\nnumeroMaillot: %d\nage: %d\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].prenom, joueurs[i].poste, joueurs[i].numeroMaillot, joueurs[i].age, joueurs[i].buts);
        found = 1;
            break;
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
        statunombre();

            break;
        case 2:
        agem();

            break;
        case 3:
        plusbuts();
            break;
        case 4:
        buteur();

            break;
        case 5:
        stage();
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
    float p;
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
        if(joueurs[i].buts > b){
            printf("id: %d\nle nom: %s\nbuts%d\n", joueurs[i].id, joueurs[i].name, joueurs[i].buts);
        }
        
    }
    
}
void stage()
{
    int mini = joueurs[0].age;
    int maxi = joueurs[0].age;
    for (int i = 0; i < player ; i++)
    {
            if (joueurs[i].age < mini)
            {
                mini=joueurs[i].age;
                
            }
            if(joueurs[i].age>maxi){
                maxi = joueurs[i].age;
            }
        }
        printf("mini age: %d\n", mini);
        printf("max age : %d\n", maxi);
    
}
        


