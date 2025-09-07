#include <stdio.h>
#include <string.h>
#define MAX 50
struct fin{
    char nom[MAX];
    char email[MAX];
    int number_phone[MAX];
};
struct fin contacts[50];
int nb_contact = 0;
void ajout();
void chang();
void afficher();
void rechercher();
void supprimer();
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
        chang();
        break;
        case 3:
        afficher();
        break;
        case 4:
        rechercher(); 
        break;
        case 5:
        supprimer();
        break;
        default:
        break;
    }
}while(choice != 0);

}
    void ajout(){
        struct fin p;
    if (nb_contact>=MAX){
            printf("carn plan");
            return;
        }
        printf("### le nom  ###\n");
        for(int i=0; i<4; i++){
            printf("entre le nom: \n");
            scanf("%s", p.nom);
        }
        printf("### email ###\n");
        for(int j=0; j<4; j++){
            printf("entre email: \n");
            scanf("%s", p.email);
        }
        printf("### number_phone ###\n");
        for(int z=0; z<4; z++){
            printf("entre number_phone: \n");
            scanf("%d", &p.number_phone[MAX]);


        }
    


    }
    void chang(){
        char nom[MAX];
        int i;
        printf("entre le modifier: \n");
        scanf("%s", nom);
        if (i=-1){
            printf("contact dont have exist\n");
            
        }
        printf("noveux nam: \n");
         scanf("%s",contacts[i] .number_phone);
          printf("noveux  email: \n");
            scanf("%s",contacts[i] .email);



    }
    void afficher(){

        
        for(int i=0; i<4; i++)
        printf(" le nom: %s\n l email: %s\n number_phone: %d\n, p.nom, p.email, p.nomber_phon");


    }
    void rechercher(){
        char nom[MAX];
        printf("entre nom: \n");
        scanf("%s", nom);
        for( int i=0; i<nb_contact; i++){
            if(strcmp(contacts[i].nom, nom)==0){
                return ;
            }


        }

    }
    void supprimer(){
        char nom[50];
        int i, j, trouve = 0;
        for( int i=0; i<nb_contact; i++){
            if(strcmp(contacts[i].nom, nom)==0){
                trouve = 1;
         for( int j=0; j<nb_contact-1; j++){
            contacts[j]=contacts[j+1];
         }
         nb_contact--;
         printf("contcte suprimi");

            }
        }


    }
