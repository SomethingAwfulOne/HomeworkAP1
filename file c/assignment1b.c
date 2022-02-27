#include<stdio.h>
#include<stdbool.h>

int main(){
    
        /*
      
int main(){
    int a,b;
    char x, oper, operb;    
   do {
    printf("For arithmetic operations (a), for relational operations (b)\n");
    scanf("%c", &x);} 
    while(x!='a' && x!='b');
    
    input: 
    printf("Enter 2 numbers please:\n");
    scanf("%d%d", &a, &b);


   
    switch(x)
    {
      case 'a':
        fflush(stdin);
        printf("enter an operator please (+ - * / %):\n");
        scanf("%c", &oper);
        
        switch (oper)
        {
            case '+': printf("a+b = %d\n", a+b); break;
            case '-': printf("a-b = %d\n", a-b); break;
            case '*': printf("a*b = %d\n", a*b); break;
            case '/': 
              if (b!=0) printf("a/b = %d\n", a/b);
              else printf("invalid"); break;
            case '%':   
              if (b!=0) printf("a/b = %d\n", a%b);
              else printf("invalid"); break;      
            default:  printf("Invalid operation\n"); break;
        } 
        
        break; 

      case 'b': 
        fflush(stdin);
        printf("enter an operator please (< >):\n");
        scanf("%c", &operb);
      
        switch (operb)
        {
            case '<': 
              if (a<b) printf("the operator between a and b is %d<%d", a,b); 
              else if (a=b) printf("the numbers cant use this operators");
              else printf("the operator between a and b is %d<%d", b, a);
              break;
            case '>': 
              if (b>a) printf("the operator between a and b is %d>%d", b, a);
              else if (a=b) printf("the numbers cant use this operators");
              else printf("the operator between a and b is %d>%d", a,b);
              break;
            default: 
              printf("you've entered a invalid operation");
              break;
        } 
        
        break;
      default: printf("n/a"); break; 
    }
    //2
    
    int tempe;
    do {
        printf("enter a temperature between -50 and +5 oC:\n");
        scanf("%d", &tempe);
    } while ((tempe<-50)||(tempe>5));
    
    int speed;
    do {
        printf("enter a wind speed between 5 and 80km/h:\n");
        scanf("%d", &speed);
    } while ((speed<5)||(speed>80));

    if ((speed >=5)&&(speed<10)) {
        switch(tempe) {
            case -50 ... -25: printf("This is dangerous for kids to go out.\n"); break;
            case -24 ... -15: printf("this is risky to go out\n"); break;
            case -14 ... 5: printf("This is comfortable for kids to go out\n"); break;
        }
    }
    else if ((speed>=10) && (speed<40)) {
        switch(tempe){
            case -50 ... -20: printf("This is dangerous for kids to go out.\n"); break;
            case -19 ... -15: printf("this is risky to go out\n"); break;
            case -14 ... 5: printf("This is comfortable for kids to go out\n"); break;
        }
    
    }
     else if ((speed>=40) && (speed<55)) {
        switch(tempe){
            case -50 ... -15: printf("This is dangerous for kids to go out.\n"); break;
            case -14 ... -10: printf("this is risky to go out\n"); break;
            case -9 ... 5: printf("This is comfortable for kids to go out\n"); break;
        }
    }
     else if ((speed>=40) && (speed<=80)) {
        switch(tempe){
            case -50 ... -15: printf("This is dangerous for kids to go out.\n"); break;
            case -14 ... -5: printf("this is risky to go out\n"); break;
            case -4 ... 5: printf("This is comfortable for kids to go out\n"); break;
        }
    
    }

    
   //3
    int grade;
    do {
    printf("Eetter your grade between 0 and 100: \n");
    scanf("%d", &grade);
    }
    while ((grade<0)||(grade)>100);
    char gradec;
    do {
    printf("Eetter your grade from in letter from A to F except E : \n");
    scanf("%c", &gradec);
    }
    while (gradec<'A'||gradec>'F'||gradec=='E');
    
   //4
   int month, day;
   do{  
       printf("enter a month and a day please:\n");
       scanf("%d""%d", &month, &day);
          } while ((month<0)||(month>12)||(day<0)||(day>31);

//5. a
    int days, weeks, years, daysLeft;
    do {
    printf("Enter a valid number of days please:\n");
    scanf("%d", &days);
     }
    while (days<0);
    years = days/365;
    weeks = (days%365)/7;
    daysLeft = (days%365)%7;
    printf("number of years are :%d, weeks are %d and %d days\n", years, weeks, daysLeft);
    //b
    int year;
    do {
        printf("please enter a 4-digits year:");
        scanf("%d", &year);}
    while (year<1000 || year>9999);
    if ((year%4 ==0 && year%100 != 0)||(year%400 ==0))
      printf("%d is a leap year", year);
    else 
      printf("%d is not leap year", year);
    //c
    int m, d, y1, d1;
    float x0, y0, m0, d0 ;
    do{
      printf("what is the date dd/mm/yyyy?\n");
      scanf("%d/%d/%d", &d, &m, &y1);}
    while (y1<1000 || y1>9999 || d<1 || d>31 || m<1 || m>12);
    
    y0 = y1 - (14-m)/12;
    x0 = y0 + y0/4 - y0/100 + y0/400;
    m0 = m +12 * ((14-m)/12)-2;
    d0 = ((d +x0 +(31*m0)/12));
    d1 = (int)(d0) % 7;
    switch(d1){
      case 0: printf("Sun\n"); break;
      case 1: printf("Mon\n"); break;
      case 2: printf("Tues\n"); break;
      case 3: printf("Wed\n"); break;
      case 4: printf("thurs\n"); break;
      case 5: printf("Fri\n"); break;
      case 6: printf("Sat\n"); break;
      default: printf("number is out of range\n"); break;
    }
    

//6
const int MY_PIN;
printf("enter your pin 4 digits:");
scanf("%d", &MY_PIN);
int pin;
do {
    printf("please enter your pin \n");
    scanf("%d", &pin);
    if (pin!=MY_PIN)
        printf("you entered the wrong pin");
} while (pin!=MY_PIN);

//7
int days, weeks, years, daysLeft;

input: 
do {
  printf("Enter a valid number of days please:\n");
  scanf("%d", &days);
  }
while (days<0);
years = days/365;
weeks = (days%365)/7;
daysLeft = (days%365)%7;
printf("number of years are :%d, weeks are %d and %d days\n", years, weeks, daysLeft);

char repeat;
do {
  fflush(stdin);
  printf("Would you like to enter another date yes (Y) and no (N)?\n");
  scanf("%c", &repeat);}
while (repeat!='Y' && repeat!='N');

switch(repeat) {
  case 'Y': goto input; break;
  case 'N': ; break;
}

//8

int grade;
int sum=0;
char ans;
do{

do{
  printf("enter a grade from 0 to 100 (0-100) please:\n");
  scanf("%d", &grade);
} while (grade<0 || grade>100);

sum = sum + grade;
fflush(stdin);
printf("would you like to enter anther grade yes(Y) and no (N)\n");
scanf("%c", &ans);

} while (ans=='Y');

printf("the sum of grade is %d", sum);

*/
//9
int mood;
printf("Welcome to MyFlix\n");
printf("What are you in the mood for (1-7)\n");
scanf("%d", &mood);
switch(mood){
  case 1: printf("Non-stop awesome action"); break;
  case 2: printf("superhero & Sci-Fi"); break;
  case 3: printf("Romantic but Lit-wise deep"); break;
  case 4: printf("Fun & Uplifting adventures"); break;
  case 5: printf("Kids time"); break;
  case 6: printf("Educaitonal"); break;
  case 7: printf("your faves"); break;
}

return 0;
}