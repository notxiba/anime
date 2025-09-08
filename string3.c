#include <stdio.h>
#include <string.h>
int main(){
    char nome[50];
    char nim[50];
    printf("entre nome: ");
    scanf("%s", nome);
    printf("entre nim: ");
    scanf("%s", nim);
    if(strcmp(nome,nim)==0){
        printf("___est un egal____");

    }
    else{
        printf("____est un deffirant_____");
    }
}