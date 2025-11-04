#include <stdio.h>

int main() {
    
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<2;i++){
        int temp =arr[i];
        arr[i]=arr[4-1];
        arr[4-i]=temp;
    }
    
    printf("rename arry");
    for(int i=0; i<5;i++){
        printf("%d\n",arr[i]);
    } 
    return 0;   

} 



    




