# include<stdio.h>
int main(){
    int a[]={1,2,3};
    int *pt=a;
    printf("%d\n",*pt);
    pt+=1;
    printf("%d",*pt);

}