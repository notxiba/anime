#include <stdio.h>
int main(){
    int x;
    printf("entre cut: ");
    scanf("%d", &x);
    int tab[x];
    for(int i=0; i<x; i++){
        printf("entre number %d: ", i+1);
        scanf("%d", &tab[i]);
    }
    for(int j=0; j<x; j++){
        for(int k=j+1;k<x;k++){
            if(tab[j]<tab[k]){
                int bat = tab[j];
                tab[j] = tab[k];
                tab[k] = bat;

            }
        }

    }
    
    printf("%d\n",tab[0]);

}

// 3 7 2 8
// 0 1 2 3