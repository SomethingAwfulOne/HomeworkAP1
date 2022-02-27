/*****************************
 * LaSalleCollege
 * AP1, Variable & Arithetic operators //this is to store different version
 * v1.0
 * 
 * 
 * ********************************/
#include <stdio.h>
int main(){

    // this is one line for comment from the beginning to the end of the line
    /* this is the mutli line for comment
    ....*/
    /*
    print("hello world!\n");
    print("This is c\n");
    */ //  can not have multi comment inside multi comment
    // /*
    printf("");// the comment is \
    normally in the beginning 
    int x;  //declaration save space in memory 4byte for variable x
    int y, z; //declaration of 2 variables y and z
    printf("X lives $ %p\n", &x); // prepending the var with & (&x) gives you the memory location (adress/hexa)  of this variable)
    // int x; float y; this works but you should declare variables of different type in different types
    printf("y lives at %p\ny = %d\n", &y, y);

    int a = 10;
    int b = 5;
    int c = 3;

    float x2 = 10.0, y2 = 5.55, z2 = -3.3;
    printf("X2 = %f\n", x2); //it prints 10.00000
    printf("x2 = %.2f", x2); // you can determine how many digits follow the decimal point .2f is 2 digits

    // + - * / 
    int sum = a + b;
    printf("sum=%d\n", sum);
    sum = sum + c;
    printf("sum=%d\n", sum);

    int difference = a - b;  // int -2^31 to 2^31
    printf("diff = %d\n", difference);

    float product; // declaration only
    product = x2 * y2; 
    printf("product = %f\n", product);

    int quotient = a/c;
    int remainder = a%c;
    print("quotient = %d\n", quotient);
    print("remainder = %d\n", remainder);

    float a_f = 10;
    float c_f = 3;
    float q_f = a_f/c_f;
    printf("q_f = %f\n", q_f);

    // you cannot declare a varibale using a name you have used before within a same scope

    if (0<1){
        
        int x = 10;
        
    }



    return 0;
}