#include<stdio.h>
int main(){
    int i = 5;
    
    for(i;i>=1;i--){
        int j;
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;    
}


