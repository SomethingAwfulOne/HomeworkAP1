//STRING// Cannot compare string using == or != have to use strcmp(check, input), have to add string.h library. 
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
/*STRING
char month[20];
printf("enter the month\n");
fgets(month, 20, stdin);
//scanf("%s", month);
printf("the month is %s\n", month);
bool a= (strcmp("December", month));
printf("%d", a);*/


/*STRING
To take a line as a input we declare char stringname[length] to scan use fgets(stringname, length, stdin) or scanf("%[^\n]%*c",s) if this scan statement doesnt work put scanf("\n") in forn tof it  because last statement will read a new line character from the previous line. 



















return 0;
}