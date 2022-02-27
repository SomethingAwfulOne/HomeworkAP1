#include<stdio.h>
#include<stdbool.h>

int main(){

/*char middle_initial = 'M';
//string
char first_name[]="james";
char ap1_course_number[9]; //the number of character need to be 1 more  than needed. 1 for the null character \0

char first_name1[15];
char last_name1[20];

printf("hello what is your name?: \n");
scanf("%s", first_name1);
printf("Hi %s ! what is your last name?\n", first_name1);
scanf("%s", last_name1);// works for int, float, char, strings but cut at space or enter
printf("Nice to meet you %s %s", first_name1, last_name1);

char full_name[];
printf("hello what is your full name\n");
fgets(full_name, 25, stdin);//save the input string, sane it into variable full name with the max length is 25.

puts(full_name);//just print out the string 
printf("nice to meet you %s", full_name)*/
//02 feb
   /* _Bool a = true;
    _Bool b = false;
    _Bool a = 1;
    _Bool b = 0;
    bool x = true;
    bool y = false;

    printf("x=%d\n", x);
    printf("y=%d\n", y);
    */

   //relational operators: < <= >= > ==
   // arithmetic operators: + - 
   // printf("7>17=>%d", 7>17);
  /* bool s1 = true;
   bool s2= false;
   bool s3 = true;
   bool s4 = false;

   printf("T && F => %d\n", s1&&s2);
   printf("T && T => %d\n", s1&&s3);
   printf("F && T => %d\n", s2&&s3);
   printf("F && F => %d\n", s2&&s4);

   printf("T || F => %d\n", s1||s2);
   printf("T || T => %d\n", s1||s3);
   printf("F || T => %d\n", s2||s3);
   printf("F || F => %d\n", s2||s4);

   printf("aaf%d\n", 4 && 1%1==0);
   printf("aaf%d\n", 1 && 1%1==0);
   printf("aaf%d\n", 0 && 1%1==0);
   */
    float mid_term, project, final, final_avg;
    printf("what is your mid term:\n");//printf("enter your midterm, project and final");
    scanf("%f", &mid_term);//scanf("%f%f%f", &mmid_term, &project, &final);
    printf("what is your project:\n");
    scanf("%f", &project);
    printf("what is your final?:\n");
    scanf("%f", &final);
    final_avg = (0.3*mid_term) + (0.3*project)+(0.4*final);
    printf("your final average is %.2f\n", final_avg);
    bool A = final_avg >= 90 && final_avg <=100;
    bool B = final_avg >= 80 && final_avg <90;
    bool C = final_avg >= 70 && final_avg <80;
    bool D = final_avg >= 60 && final_avg <70;
    bool F = final_avg < 60;
    
    if (A==true){
        printf("Congratulations! you aced the course!\n");
    }
    if (B==true){
        printf("Congratulations! you aced the course!\n");
    }
    if (C==true){
        printf("Congratulations! you aced the course!\n");
    }
    if (D==true){
        printf("Congratulations! you aced the course!\n");
    }
    if (F==true){
        printf("Congratulations! you aced the course!\n");
    }
    if (A)
        printf("A!\n"); //if there is only 1 stt in the if stt you can delete the bracket.
    if (B)
        printf("B!\n");
    if (C)
        printf("C!\n");
    if(D))
        printf("D!\n");
    if (F)
        printf("F!\n");
    if (final_ag >= 90 && final_avg <=100)
        printf("A");
    else if (final_ag >= 80 && final_avg <900)
        printf("B");
    return 0;
}