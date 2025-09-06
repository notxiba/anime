#include <stdio.h>
#define MAX 20
struct kay
{
    char name[MAX];
    char last_name[MAX];
    int age[MAX];
};
void read_person();
int main(){
    read_person();


return 0;
}
 void read_person(){
    struct kay p;
    printf("entre name: \n");
    scanf("%s", &p.name);
    printf("entre last_name: \n ");
    scanf("%s", &p.last_name);
    printf("entre age: \n");
    scanf("%d", &p.age );
    printf("nume:  %s\nlast_name: %s\n age: %d\n ", p.name, p.last_name, p.age);
    

    


}
