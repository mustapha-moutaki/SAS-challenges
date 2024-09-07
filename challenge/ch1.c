#include<stdio.h>
int main(){
    int T[10] = {2, 3, 5, 7, 8, 9, 1, 12, 4, 6};

    int i, j;

    for ( i = 0; i < 10-1; i++){
        for ( j = 0; j < 10-i-1 ; j++){

            int tmp = 0;
            if (T[j] > T[j+1]){
                tmp = T[j+1];
                T[j]=T[j+1];
                T[j] = tmp;
                
            }
            
        }
        
    }
    for ( j = 0; j < 10; j++)
    {
        printf("%d", T[j]);
    }
    
    
/*
tri par insertion
#include <stdio.h>
int main(){
    //trie avec insertion

int t[10]={5,8,4,9,7,1,2,6,3,9};
int i,j;

for(i=1;i<10;i++){
   int tmp = t[i];
    j = i -1;

    while(tmp<t[j] && j>=0){
        t[j +1]=t[j];
        j--;
    }
      t[j+1]=tmp;

}
for(i=0;i<10;i++)
    printf("%d",t[i]);

return 0;
}
*/
    return 0;
}