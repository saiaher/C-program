#include <stdio.h>
// auto code

void sai() {
    auto int x = 10;  
    printf("%d\n", x);
}



// static code


void count() {
    static int i = 0;
    i++;
    printf("%d\n", i);
}


// exter code
// it is global for all code


int value = 100;  

void show() {
    extern int value;
    printf("%d\n", value);
}

// regiter code 
// for fast axis

void loop() {
    register int i;
    for (i = 1; i <= 3; i++) {
        printf("*");
        printf("%d\n", i);
    }
}

int main() {
    loop();
    count();  
    sai();
    show();
    return 0;
}

