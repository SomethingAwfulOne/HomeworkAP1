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

//3 print number from 0-6 except 3 and 6
for (int j=0; j<=6; j++){
    if (j!=3&&j!=6)
        printf("%d\n", j);
}

// 4 printf from 1500 to 2700 that divisible by 5 and 7
for (int l=1500; l<=2700; l+=5){
    if (l%7==0)
        printf("%d\n", l);
}

//5 get a positive input validate and print multiplication table. 
int num;
do {
    printf("enter an integer please: \n");
    scanf("%d", &num);
} while (num<=0);
for (int m=1; m<=10; m++){
    printf("%d * %d = %d\n", m, num, m*num);
}

//6 input a positive integer, validate and check if it's prime
int number, count=0; 
do {
    printf("enter an integer please: \n");
    scanf("%d", &number);
} while (number<=0);
for (int n=2; n<number; n++){
    if (number%n==0) {
        count=count+1;
    }
    else {
        count=count +0;
        }
}
if (count==0)
    printf("this is prime number");
else printf("this is not a prime number");

//7 input 2 positive number, validate and find the value of number1 ^ number 2
int num1, num2, product=1; 
do {
    printf("enter two integers please: \n");
    scanf("%d %d", &num1, &num2);
} while (num1<=0 || num2<=0);
for (int o=1; o<=num2; o++){
    product = product * num1;
}
printf("the value of %d raised to the power of %d is %d\n", num1, num2, product);

//8 input an positive integer, validate and find factorial value. 
int number1, factorial=1; 
do {
    printf("enter an integer please: \n");
    scanf("%d", &number1);
} while (number1<=0);
for (int p=1; p<=number1; p++){
    factorial = factorial * p;
}
printf("the factorial value is %d\n", factorial);
*/
int number, value, num_even=0, num_odd=0, sum_even=0, sum_odd=0;
printf("how many integer in your set?\n");
scanf("%d", &number);

for (int i=1; i<=number; i++){
    printf("enter one integer in your set please?\n");
    scanf("%d", &value);

    if (value%2==0){
        num_even=num_even+1;
        num_even=sum_even+value;}
    else {
        num_odd=num_odd+1;
        sum_odd=sum_odd+value;}
    }
    
printf("number of even number is %d\n", num_even);
printf("number of odd number is %d\n", num_odd);
printf("sum of even number is %d\n", sum_even);
printf("sum of odd number is %d\n", sum_odd);



return 0;
}