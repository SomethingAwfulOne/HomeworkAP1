#include<stdio.h>
#include<stdbool.h>
int main(){
//1 prints from 1-10 and their sum
/*
int sum=0;
for (int i=1; i<=10; i++){
    printf("%d\n", i);
    sum=sum+i;
}
printf("sum from 1 to 10 is %d\n", sum);
*/
//2 Print all from 33 and 126 ASCII table
/*
for (int c = 33; c<=126; c++){
    printf("%c\n",c);
}
*/
//3 print number from 0-6 except 3 and 6
for (int j=0; j<=6; j++){
    if (j!=3&&j!=6)
        printf("%d\n", j);
}



return 0;
}