#include <stdio.h>
int main(){
    float Jours_accordes, Jours_utilises, Jours_restants;
    int Statut;
    printf("entre la number de jours_accordes: ");
    scanf("%f", &Jours_accordes);
    printf("entre la number de jours_utilises: ");
    scanf("%f", &Jours_restants);
    printf("entre lomplwa de temp: ");
    scanf("%d", &Statut);
    if(Statut == 1){
        Jours_restants = Jours_accordes - Jours_utilises;


    }
    else if(Statut == 0){
        Jours_restants = (Jours_accordes / 2) - Jours_utilises;

    }
    else{
        printf("Vous avez dépassé le nombre de jours autorisés.");
        
    }
    return 0;
}