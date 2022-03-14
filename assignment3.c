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
// Another way from Mayur: 
      for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            if(i>j)
                printf(".");
            else
                printf("0");
        }
        printf("\n");
    }
// another way from Maria
int i;
int j;
int n;
for (i=0; i<=4; i++)
{
     for(n=1; n<=i; n++)
    {
        printf(".");
    }
    for (j=5; j>i; j--)
    {
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
 for (int i=1; i<=5; i++){
    for (int j=0; j<i; j++){
        printf("%d", i-j);
    }
    printf("\n");
    }
    
//Another way from Mayur:-
    
     for (int i = 1; i <= 5; i++){
        for (int j = 0; j < i; j++){
            printf("%d",i-j);
        }
        printf("\n");
    }
 // another way from Ali: 
 
    for (int y=1; y <= 5; y++){
    for (int x=y; x > 0; x--){
        printf("%d",x);
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

//Another way from Mayur :

   for (int i = 1; i <= 5; i++){
       for (int j = 5; j >= 1; j--){
            if(j>i)
                printf(" ");
            else
                printf("x");
       }
        printf("\n");
   }
