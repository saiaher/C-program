# include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int target=20;

    int i;
    for(i=0;i<6;i++){
        if(arr[i]==target){
            printf("the %d found in %d\n ",target,i); 
        }
    }
    printf("%d not found in array",target);
    return 0;
}