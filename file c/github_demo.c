#include<stdio.h>

int main(){
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

return 0;
}