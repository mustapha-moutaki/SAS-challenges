#include<stdio.h>
int main(){

    int age, sexe;
    char fullName[20], email[20];

    printf("entrer le non et le prenom: \t");
    gets(fullName);

    printf("entrer email: \t");
    scanf(" %s", &email);

    printf("choisir votre sexe: \n1-male\n2-female\t");
    scanf(" %d", &sexe);

    printf("age: \t");
    scanf(" %d", &age);

    printf("votre infos:\n----------------------\n");
        printf("le non et prenom: %s\n", fullName);
        printf("email: %s\n", email);
        printf("age: %d\n", age);
    if (sexe == 1)
    {
        
        printf("le sexe: male");
        

    }
    else{
        
        printf("le sexe: female\n");
    }


    return 0;
}