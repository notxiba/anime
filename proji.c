#include <stdio.h>
#include <string.h>
#define MAX 100
int player = 0;
struct fot{
    char name[MAX];
    char prenom[MAX];
    char poste[MAX];
    int numeroMaillot;
    int age;
    int buts;
    
};
struct fot f;
void ajout_one();
void ajout();
void ajout_plu();
int main(){
    int choice;
    do{
         printf("1, ajouter un contact\n2, modifier un contact\n3, supprimer un contact\n4, afficher tout les contacts\n5, rechercher un contact\n");
    scanf("%d", &choice);
  switch(choice){
        case 1:
        ajout();
        
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
}while(choice != 0);


}
void ajout(){
    int ajo;
    do{
         printf("1, Ajouter un nouveau joueur\n2, Ajouter plusieurs joueurs.\n");
    scanf("%d", &ajo);
  switch(ajo){
        case 1:
        ajout_one();
        break;
        case 2:
        ajout_plu();

        break;
        default:
        break;
    }
}while(ajo != 0);


}
void ajout_one(){
    
    struct fot f;
    if (player>=MAX){
            printf("bas de donne plan");
            return;
        }
        printf("### le nom  ###\n");
        
            printf("entre le nom: \n");
            scanf("%s", f.name);
        
        printf("### prenome ###\n");
            printf("entre le prenom:  \n");
            scanf("%s", f.prenom);
        printf("### poste ###\n");
            printf("entre poste : \n");
            scanf("%S", f.poste);
        printf("### numeroMaillot ###\n");
            printf("entre numeroMaillot : \n");
            scanf("%d", &f.numeroMaillot);
        printf("### age ###\n");
            printf("entre age : \n");
            scanf("%d", &f.age);
        printf("### buts ###\n");
            printf("entre buts : \n");
            scanf("%d", &f.buts);

    }
    void ajout_plu(){
        int n;
        printf("entre le nombe de  joueur qui ajout");
        scanf("%d", &n);
        if (player>=MAX){
            printf("bas de donne plan");
            return;
        }
        printf("### le nom  ###\n");
        for(int i=0; i<4; i++){
        
            printf("entre le nom: \n");
            scanf("%s", f.name);
        
        printf("### prenome ###\n");
            printf("entre le prenom:  \n");
            scanf("%s", f.prenom);
        printf("### poste ###\n");
            printf("entre poste : \n");
            scanf("%S", f.poste);
        printf("### numeroMaillot ###\n");
            printf("entre numeroMaillot : \n");
            scanf("%d", f.numeroMaillot);
        printf("### age ###\n");
            printf("entre age : \n");
            scanf("%d", f.age);
        printf("### buts ###\n");
            printf("entre buts : \n");
            scanf("%d", f.buts);
    }



    }


        


