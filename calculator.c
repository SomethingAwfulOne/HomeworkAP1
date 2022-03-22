/*
* C calculator implemented in menu format getch();
*/

 //some pre processor directives and library inserts
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

//calculator variables  //global
char again;
int add=0,mult=0,sub1=0,sub2=0,div1=0,div2=0,remain=0,total=0,choice=0,howmany=0; 


// functions to use
void addition();
void substraction();
void division();
void multiplication();


int main (){ //beginning of main

       do { //big loop keeping you in the program
            
          do
          {     //make a choice menu
            printf("\n  NUMERIC CALCULATOR");
            printf("\n Main Menu Operators Choice");
            printf("\n---------------------------\n");
    
            printf("\n1 - ADDITION");
            printf("\n2 - DIVISION");
            printf("\n3 - MULTIPLICATION");
            printf("\n4 - SUBSTRACTION");
            printf("\n5 - QUIT/EXIT");
            printf("\nWhat operation will we preform? (1-4) (5): ");
                scanf("%d",&choice);
                    if (choice==1 || choice==2 || choice==3 || choice==4 || choice==5)  //verify choice
                        printf("\nChose: %d\n",choice);
                    else    
                        printf("\n! ! ! Nuh-uh, Choices are 1 to 5\n");
          } while (choice <1 || choice >5); //making a choice   //(choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5);
         
        //clrscr ();  //clear output screen //didn't work
        // system ("cls"); //clear output screen //didn't work

        switch(choice){     //which choice //which operation
            case 1:{ //addition
                do{
                    printf("\n ADDITION \n");
                    addition();     //calls the function
                        printf("\n Go again? (y / n) \n");  //to stay in the small loop
                            scanf("%s",&again);
                }while(again=='y');
            } break;        //go back to menu
            case 2:{ //division
                do{
                    printf("\n DIVISION \n");
                    division();     //calls the function
                        printf("\n Go again? (y / n) \n");  //to stay in the small loop
                            scanf("%s",&again);
                }while(again=='y');
            } break;        //go back to menu
            case 3:{ //multiplication
                do{
                    printf("\n MULTIPLICATION \n");
                    multiplication();   //calls the function
                        printf("\n Go again? (y / n) \n");  //to stay in the small loop
                            scanf("%s",&again);
                }while(again=='y');
            } break;        //go back to menu
            case 4:{ //substraction
                do{
                    printf("\n SUBSTRACTION \n");
                    substraction();     //calls the function
                        printf("\n Go again? (y / n) \n");  //to stay in the small loop
                            scanf("%s",&again);
                }while(again=='y');
            } break;        //go back to menu
            default: break;   //leaving menu
        } //end switch

    }while (choice!=5); //leaving program

return 0; // end of program //menu calculator
}

    //FUNCTIONS defined beyond here
    // addition loop
    void addition(){
        total=0;
        howmany = 0;   
            do{
                printf("How many numerals are we adding (2 to 20)?: ");
                    scanf("%d",&howmany);
            }while (howmany<2 || howmany>20); //verify the loop counter
            for (int count=1; count<=howmany; count++){ //perform the loop
                printf("\n%d number: ",count);
                    scanf("%d",&add);
                    total=total+add;    //the math
            }
            printf("\nYup, that Adds up to: %d \n", total);
    }
    // multiplication loop
    void multiplication(){
        total=1;
        howmany = 0;   
            do{
                printf("How many numerals are we Multiplying (2 to 20)?: ");
                    scanf("%d",&howmany);
            }while (howmany<2 || howmany>20); //verify the loop counter
                for (int count=1; count<=howmany; count++){     //perform the loop
                    printf("\n%d number: ",count);
                        scanf("%d",&mult);
                        total=total*mult;   //the math
                }
            printf("\nAnd, that Multiplies to: %d \n", total);
    }
    // subtraction loop
    void substraction(){
        total=0;
            printf("\nEnter the 1st Integer: ");
                scanf("%d",&sub1);
                    printf("\nEnter 2nd Integer: ");
                        scanf("%d",&sub2);    
                            total=sub1-sub2;    //the math
            printf("\nSo, the result is: %d \n", total);
    }
