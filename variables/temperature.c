#include<stdio.h>
int main(){
float celsius, kelvin;


printf("entrer la temperarure en celsius:\n");
scanf("%f", &celsius);
kelvin = celsius + 273.15;
printf("la temperature en kelvin est: %.2f", kelvin);
    return 0;
}