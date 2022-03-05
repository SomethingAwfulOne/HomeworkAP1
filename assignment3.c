#include<stdio.h>

int main(){

//1
/* for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++){
        printf("%d", j);
    }
    printf("\n"); 
}*/
//2
/* for (int i=1; i<=5; i++){
    for (int j=0; j<5; j++){
        printf("%d", j+i);
    }
    printf("\n");
    } */
//3

/* for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++){
        for (int n=5-j; n<=5&&n>=1; ){
        printf("*");
    }
        printf("0");}
    printf("\n"); 
} */
//4
/* for (int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
        printf("%d", i);
    }
    printf("\n");
    }
//5
for (int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
        printf("%d", j);
    }
    printf("\n");
    } */
//6
/* for (int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
        printf("%d", 6-j);
    }
    printf("\n");
    } */
//7
/* for (int i=1; i<=6; i++){
    for (int j=1; j<i; j++){
        printf("%d", i-j);
    }
    printf("\n");
    } */
//8
for (int i=1; i<=5; i++){
    for (int j=0; j<i; j++){
        printf("%d", i+j);
        printf(" ");
        j++;
    }
    printf("\n");
    }
return 0; 
}