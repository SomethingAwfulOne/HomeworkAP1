#include<stdio.h>

int main(){

//1
for (int i=1; i<=5; i++){
    for (int j=1; j<=5; j++){
        printf("%d", j);
    }
    printf("\n"); 
}
//2
for (int i=1; i<=5; i++){
    for (int j=0; j<5; j++){
        printf("%d", j+i);
    }
    printf("\n");
    }
//3 

for (int i=1; i<=5; i++){
    for (int j=1; j<i; j++){
        printf(".");
        }
    for (int z=1; z<=6-i; z++){
        printf("0");
    }
    printf("\n");
    }
// Another way : 
      for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            if(i>j)
                printf(".");
            else
                printf("0");
        }
        printf("\n");
    }
//4
for (int i=1; i<=5; i++){
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
    } 
//6
for (int i=1; i<=5; i++){
    for (int j=1; j<=i; j++){
        printf("%d", 6-j);
    }
    printf("\n");
    }
//7
 for (int i=1; i<=6; i++){
    for (int j=1; j<i; j++){
        printf("%d", i-j);
    }
    printf("\n");
    }  
//8
int n8=1;
for (int i=1; i<=5; i++){
    for (int j=0; j<i; j++){
        printf("%d", n8);
        n8++;
        printf(" ");
    }
    printf("\n");
    } 
//9
for (int i=1; i<=5; i++){
    for (int j=1; j<=5-i; j++){
        printf(" ");
        }
    for (int z=1; z<=i; z++){
        printf("X");
    }
    printf("\n");
    } 
return 0; 
}
