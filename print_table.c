#include<stdio.h>

void main(){
    int x;
    printf("put number that haveing table ");
    scanf("%d",&x);
    for(int i=1; i<=10;i++){
        printf("%d * %d = %d\n",x,i,x*i );
    }

}