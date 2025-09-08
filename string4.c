#include <stdio.h>
#include <string.h>
int main(){
    char nam[50];
    printf("entre nam: ");
    scanf("%s",nam);
     int size = strlen(nam);
     printf("%d\n",size);
    for(int i=size; i>=0; i--){
        printf("%c",nam[i]);
    }
    printf("\n");
}