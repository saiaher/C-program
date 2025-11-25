#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[20];
    int age;
    struct date x;
};

int main() {
    struct student s1;

    strcpy(s1.name, "alice");
    s1.age = 20;
    s1.x.day = 10;
    s1.x.month = 2;
    s1.x.year = 2004;

    printf("name: %s\n", s1.name);
    printf("age: %d\n", s1.age);
    printf("date of birth: %d-%d-%d\n", s1.x.day, s1.x.month, s1.x.year);

    return 0;
}
