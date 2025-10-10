#include <stdio.h>

int main() {
    int mark;
    printf("Enter your mark:");
    scanf("%d",&mark);
    if (mark>=35){
        if (mark>=60){
            printf("pass with first class");    
        
        }else{
            printf("only pass");
            
        }
    }else{
        printf("you are fail");

    }
    return 0;


}

    