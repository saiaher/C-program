#include<stdio.h>

int main(){
    int arr[]={9,22,34,343,23,2,23,432,1,3};
    int min = arr[0];
    for(int i=1;i<=10;i++){
        if(arr[i] > min){
            min = arr[i];

        }
        
    }
    printf("%d",min);
    return 0;

}
