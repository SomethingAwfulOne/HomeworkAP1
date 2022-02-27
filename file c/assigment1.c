#include <stdio.h>
#include <stdbool.h>

int main(){
    
/*
    //1
 int a, b;
 float x, y;
 printf("enter 2 integers plz:\n");
 scanf("%d""%d", &a, &b);
 printf("enter 2 floats plz:\n");
 scanf("%f""%f", &x, &y);
 printf("a+b=%d, a-b=%d, a*b=%d a/b=%d, a%b=%d\n", a+b, a-b, a*b, a/b, a%b);
 printf("x+y=%f, x-y=%f, x*y=%f x/y=%f\n", x+y, x-y, x*y, x/y);
 printf("x+a=%f, x-a=%f, x*a=%f x/a=%f", x+a, x-a, x*a, x/a);
    
    //ex 2
   
    int days, weeks, years, daysLeft;
    printf("How many days?\n");
    scanf("%d", &days);
    printf("number of days are :%d\n", days);   
    years = days/365;
    weeks = (days%365)/7;
    daysLeft = (days%365)%7;
    printf("number of years are :%d, weeks are %d and %d days\n", years, weeks, daysLeft);
    
    //3a

    int a = 3, b;
    a = b = 6+7;
    printf("Value of a, b are %d, %d\n", a, b);

    //4
    char letter;
    printf("enter a letter:\n");
    scanf("%s", &letter);
    printf("enter a number:\n");
    scanf("%d", &number);
   
    bool isEven = number%2 == 0;
    bool isOdd = number%2 == 1;
    bool isVowel = letter =='A'||'E'||'I'||'O'||'U';
    printf("value of even is %d, odd is %d and vowel is %d", isEven, isOdd, isVowel);
    //5
    int year, m4, m100, m400;
    printf("enter a year plz:\n");
    scanf("%d", &year);
    m4 = year%4;
    m100=year%100;
    m400=year%400;
    if (m400==0)
        printf("this is a leap year");
    else if (m100==0)
        printf("this is not a leap year");
    else if (m4==0) 
        printf("this is a leap year");
    else printf("this is not a leap year"); 
    // 5
    int year;
    printf("please enter a 4-digits year:");
    scanf("%d", &year);
    if (year<1000 || year>9999)
      printf("you enter a wrong number");
    else if ((year%4 ==0 && year%100 != 0)||(year%400 ==0))
      printf("%d is a leap year", year);
    else 
      printf("%d is not leap year", year);
      //
    int m
    do {
      printf("type in a month from 1 to 12\n");
      scanf("%d", &m);
    } while (m<1||m>12);
    
    //6

    int m, d, y1, d1;
    float x0, y0, m0, d0 ;
    printf("what is the date dd/mm/yyyy?\n");
    scanf("%d""%d""%d", &d, &m, &y1);
    
    y0 = y1 - (14-m)/12;
    x0 = y0 + y0/4 - y0/100 + y0/400;
    m0 = m +12 * ((14-m)/12)-2;
    d0 = ((d +x0 +(31*m0)/12));
    d1 = (int)(d0) % 7;
    
    if (d1==1) 
      printf("This is Monday");
    else if (d1==2) 
      printf("This is Tuesday");
    else if (d1==3) 
      printf("This is Wednesday");
    else if (d1==4) 
      printf("This is Thursday");
    else if (d1==5) 
      printf("This is Friday");
    else if (d1==6) 
      printf("This is Saturday");
    else if (d1==7) 
      printf("This is Sunday");  

      // cach 2
    switch(day){
      case 0: printf("Sun\n"); break;
      case 1: printf("Mon\n"); break;
      case 2: printf("Tues\n"); break;
      case 3: printf("Wed\n"); break;
      case 4: printf("thurs\n"); break;
      case 5: printf("Fri\n"); break;
      case 6: printf("Sat\n"); break;
      default: printf("number is out of range\n"); break;
    
    //grades
    
    }
    
    */

    //7 
    int m, d;
    printf("what is the date dd/mm?\n");
    scanf("%d/%d", &d, &m);

    bool winter = (((m==12)&&(d>=21))||(m==1)||(m==2)||((m==3)&&(d<=20)));
    bool spring=(((m==3)&&(d<=21))||(m==4)||(m==5)||((m==6)&&(d<=20)));
    bool summer = (((m==6)&&(d>=21))||(m==7)||(m==8)||(m==9)||((m=10)&&(d<=20)));
    bool fall=(((m==10)&&(d<=21))||(m==11)||(m==12)||((m==12)&&(d<=20)));
    if (winter==1)
      printf("this is Winter");
      else if (spring==1)
           printf("this is Spring");
              else if (summer==1)
                 printf("this is summer");

/*
    //7
    int m, d;
    printf("what is the date dd/mm?\n");
    scanf("%d/%d", &d, &m);
    

    if (m>)
    //8 
char character;

printf("enter a character plz \n");
scanf("%c", &character);
bool nom= (character>=48)&&(character<=57);
bool alpha=((character>=65)&&(character<=90))||((character>=97)&&(character<=122));
if (nom==1)
    printf("this is a number");
else if (alpha==1)
    printf("this is an alphabet");
else 
    printf("this is a special character");
return 0;
//9
printf("enter 3 integer:\n");
scanf("%d""%d" "%d", &a, &b, &c);
if (a>b){
  if (a>c)
  printf("the maximum of three is %d\n",a);
}
else if (b>c) 
  printf("the maximum of three is %d\n", b);
else 
    printf("the maximum of three is %d\n", c);
  
}