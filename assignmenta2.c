#include <stdio.h>

int main(){

//1. print from 1-10 and their sum

int n=1, sum=0;

while (n<=10){
    printf("%d\n", n);
    n++;
    sum=sum+n;
}

printf("their sum is: %d\n", sum);

//2 print all character from 33 to 126;

int c=33;

while (c<=126){
    printf("%c\n", c);
    c++;
}

//3 print all number from 0-6 except 3 and 6;

int i=0;
 while (i<=6){
    if(i!=3 && i!=6){
    printf("%d\n",i);
    }
    i++;
}

//4 print the numbers between 1500 and 2700, such that they are divisible by 5 and 7

int n=1500;
while (n<=2700){
    if (n%7==0){
        printf("%d\n",n);
    }
    n=n+5;
}


//5  prompts the user to input an integer. Validate the input, then print this number’s multiplication number
// not solve yet
int num;
int n=1;
do {
    printf("enter an interger please!\n");
    scanf("%d", &num);
} while (num<=0);

while (n<=10){
    printf("%d x %d = %d\n", n, num, n*num);
    n++;
}


//6 prompts the user for a positive integer. Validate the input, and check prime

int prime;
do {
    printf("enter a positive integer please \n");
    scanf("%d", &prime);
} while (prime<0);

int n=2;
int count=0;
while(n<prime){
    if (prime%n==0)
        count++;
    n++;
}
printf("count is %d\n", count);
if (count==0){
    printf("this is prime number");
}
else printf("this is not prime number");

//7 
int num1,num2;
int i=1, product=1;
do {
    printf("enter first positive integer please \n");
    scanf("%d", &num1);
} while (num1<0);

do {
    printf("enter the second positive integer please \n");
    scanf("%d", &num2);
} while (num2<0);

while(i<=num2){
    product=product*num1;
    i++;
} 
printf("num1 power to number 2 is %d\n",product);
*/
//8
int num;
int i=1, factor=1;
do {
    printf("enter one positive integer please \n");
    scanf("%d", &num);
} while (num<0);

while (i<=num){
    factor=factor*i;
    i++;
}
printf("the factorial value is %d", factor);

//9 guess number from 1-9
int guess, n=4;
do{

    printf("guess a number from 1-9 (1-9) please: \n");
    scanf("%d", &guess);
    if (guess==n)
        printf("well guessed!\n");
    else printf("try again!\n");
} while (guess!=n);

//10
int i=1, number, value, num_even=0, num_odd=0, sum_even=0, sum_odd=0;
printf("how many integer in your set?\n");
scanf("%d", &number);

while(i<=number){
    printf("enter one integer in your set please?\n");
    scanf("%d", &value);
    if (value%2==0){
        num_even=num_even+1;
        sum_even=sum_even+value;}
    else {
        num_odd=num_odd+1;
        sum_odd=sum_odd+value;
    }
    i++;
    }
printf("number of even number is %d\n", num_even);
printf("number of odd number is %d\n", num_odd);
printf("sum of even number is %d\n", sum_even);
printf("sum of odd number is %d\n", sum_odd);
*/
    return 0;
}