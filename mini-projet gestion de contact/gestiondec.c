#include<stdio.h>
#include<string.h>


struct contact{
    char nom[100];
    int numero;
    char email[100];
    int ID;

};
int nbr_contact = 0;
int choix;
struct contact table[100];
char nomCanctact_modifier[100];
int lastItem = 0;
struct contact table[100];

void ajouter_contact(){
    int i ;
    printf("-----(+)------\n");
    printf("tapez le nom: \t");
    scanf(" %[^\n]s", table[nbr_contact].nom);

    printf("tapez email: \t");
    scanf(" %[^\n]s", table[nbr_contact].email);

    printf("tapez le numero: \t");
    scanf("%d", &table[nbr_contact].numero);
    table[nbr_contact].ID = 123 + lastItem;

    lastItem++;
    nbr_contact++;
}

void modifier_contact(){
    int count=0, x;

    printf("entre le nom de contact: \t");
    scanf(" %[^\n]s ", nomCanctact_modifier);
    for (int i = 0; i < nbr_contact ; i++){
        if(strcmp(nomCanctact_modifier, table[i].nom)==0){
        printf("-----------------------\n");
        printf("le nom: %s\n", table[i].nom);
        printf("le numero: %d\n", table[i].numero);
        printf("email: %s\n", table[i].email);
        printf("ID: %d\n", table[i].ID);
        count++;
    }
    }

    if (count > 1){
        printf("entre le ID: \t");
        scanf("%d", &x);
    
    for (int i = 0; i < nbr_contact; i++){
        if (table[i].ID == x){
        printf("-----------------------\n");
        printf("modifier le contact: \n");
        printf("le nom: \t");
        scanf(" %[^\n]s", table[i].nom);
        printf("email: \t");
        
        
        scanf(" %[^\n]s", table[i].email);
        
        printf("le numero: \t");
        scanf("%d", table[i].numero);
        printf("*******************************"); 
        
        }
    
    //-----------
     else if(count == 1){
        printf("-----------------------\n");
        printf("modifier le contact: \n");
        printf("le nom: \t");
        scanf(" %[^\n]s", table[i].nom);
        printf("email: \t");
        scanf(" %[^\n]s", table[i].email);
        printf("le numero: \t");
        scanf("%d", table[i].numero); 
        
    }

    else printf("aucun contact!!!!!\n");
    
    
    }
   
    
        }}

void suprimer(){
    char contact_suprimer[50];
    printf("entre le nom de livre:\n");
    scanf(" %[^\n]", contact_suprimer);
    for (int i = 0; i < nbr_contact; i++)
    {
        if (strcmp(contact_suprimer, table[i].nom)==0){
            int i = *table[i].nom;
            for (int i = table[i].nom; i < nbr_contact-1; i++)
            {
                table[i] = table[i+1];
            nbr_contact--;
            
        }}
    }
    
}
void chercher(){
    char contact_cherche[40];
    printf("chercher un livre:\n");
    scanf(" %[^\n]s", contact_cherche);
for (int i = 0; i < nbr_contact; i++)
{
    if (strcmp(contact_cherche, table[i].nom)==0){
         printf("-------------------\n");
        printf("le nom: %s \n", table[i].nom);
        printf("le numero: %d \n", table[i].numero);
        printf("email : %s \n", table[i].email);
    }
    
}

}

void affichage(){
    int i;
    printf("-------affichage--------\n");
    for (i = 0; i < nbr_contact; i++){
        printf("-------------------\n");
        printf("le nom: %s \n", table[i].nom);
        printf("le numero: %d \n", table[i].numero);
        printf("email : %s \n", table[i].email);
    }
    
}


int main(){

    do{
         printf("-----acceuil--------\n");
    printf("1) ajouter un contact...\n");
    printf("2) modifier un contact...\n");
    printf("3) suprimer un contact...\n");
    printf("4) afficher un contact...\n");
    printf("5) chercher un contact...\n");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajouter_contact();
            break;
        case 2: 
            modifier_contact();
        break;
        case 3:
            suprimer();
        break;
        case 4:
            affichage();
        break;
        case 5:
            chercher();
        break;

        default:
            printf("oopps");
        break;
        }
    } while(choix != 0);
    
    



    return 0;
}