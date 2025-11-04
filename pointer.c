#include<stdio.h>
int main(){
    int num=10;
    int *a=&num;
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",*a);
return 0;    
}