#include <stdio.h>

int main(){

    // printf("Hello world!\n"); 
    // printf("This is my first C program!\n");
   int grade;
    do {
    printf("Eetter your grade between 0 and 100: \n");
    scanf("%d", &grade);
    }
    while ((grade<0)&&(grade)>100);
    char gradec;
    do {
    printf("Eetter your grade from in letter from A to F except E : \n");
    scanf("%c", &gradec);
    }
    while ((gradec!='A')&&(gradec!='B')&&(gradec!='C')&&(gradec!='D')&&(gradec!='F'));
    return 0;
}




