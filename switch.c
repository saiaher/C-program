#include<stdio.h>
void main(){
    int x;
    printf("enter your case:");
    scanf("%d",&x);
    switch(x){
        case 1:{
        int a=10;
        int b=20;
    
        if (a<b){
            printf("%d is big",a);
        }else{
            printf("%d is small",b);
        }
        break;

        case 2:{
        printf("I am sai");
        break;

        }

        default:{
        printf("invalid case");
        break;

        }
        
    
    
    }
    }    
}