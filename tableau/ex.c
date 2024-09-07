#include<stdio.h>
int main(){
    int T[3]={1, 3, 1};
    int x=0;
    int L[x];
    for(int i = 0; i < 3; i++){
        for(int j = i +1; i < 3; j++){
            if(T[i]==T[j]){
            L[x]= T[i];  
            x++;
            }
        }
        
    }
    for(int i = 0; i < 3; i++){
        printf("%d\n", T[i]);
    }

    return 0;
}