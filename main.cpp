#include <iostream>

char name[100];
int age;
char initial;
float grade;

int main(){
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your initial: ");
    scanf(" %c", &initial);
    printf("Enter your grade average: ");
    scanf("%f", &grade);

    printf("\n%s is %d, has an initial of '%c', and their grade average is %.2f.", name, age, initial, grade);
    return 0;
}
