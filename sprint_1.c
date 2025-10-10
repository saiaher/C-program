#include <stdio.h>

// type conversion 

// in this code after sum a is convert into sum


int main() {
    int a = 5;       
    float b = 3.2;   
    float sum;

    sum = a + b;  
    printf("sum: %3f\n", sum);  
    



    double x = 11.9;
    int y = (int)x;  // You manually cast float to int
    printf("y is integer - %d\n",y);
    

    /*this is the litter 
    beacuse this is the raw value means fix value means without variable direct value 
    */

   
    printf("%d\n", 10);
    printf("%f\n", 3.14);
    printf("%c\n", 'A');
    return 0;
}

/* basics library in c:-

stdio.h
math.h
string.h
 */


