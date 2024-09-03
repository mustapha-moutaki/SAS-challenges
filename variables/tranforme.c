#include<stdio.h>
int main(){
int kmparh, metreparsec;


printf("entrer la vitesse en km/h:\n");
scanf("%d", &kmparh);
metreparsec = kmparh * 0.27778;
printf("la vitesse en metre par second est: %d m/s", metreparsec);
    return 0;
}