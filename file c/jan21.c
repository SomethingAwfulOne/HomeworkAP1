#include <stdio.h>
#include<stdbool.h>

int main(){
    int a,b;
    char x, oper, operb;
    do {
    printf("if you want to use a arithmetic operation enter a or a relational operation enter b\n");
    scanf("%c", &x);}
    while ((x!='a')||(x!='b'));

    switch(x)
    {
        case 'a': 
        //int a, b;
        //char oper;
            printf("enter an operator please (+ - * /):\n");
            scanf("%c", &oper);
            printf("enter 2 numbers please:\n");
            scanf("%d""%d", &a, &b); 
   
            switch (oper)
            {
                case '+': printf("addition of a and b is %d\n", a+b); break;
                case '-': printf("subtraction of a and b is %d\n", a-b); break;
                case '*': printf("muplitication of a and b is %d\n", a*b); break;
                case '/': printf("division of a and b is %f\n", a/b); break;
            default: printf("you've entered a invalid operation"); 
            break;}
        case 'b': 
        //int a, b;
        //char operb;
            printf("enter an operator please (< >):\n");
            scanf("%c", &operb);
            printf("enter 2 numbers please:\n");
            scanf("%d""%d", &a, &b); 
            switch (operb)
            {
                case '<': 
                    if (a<b) printf("the operator between a and b is %d<%d", a,b); 
                    else printf("the operator between a and b is %d<%d", b, a);
                    break;
                case '>': 
                    if (b>a) printf("the operator between a and b is %d>%d", b, a);
                    else printf("the operator between a and b is %d>%d", a,b);

                break;
            default: printf("you've entered a invalid operation"); 
            break;
            }
    }

return 0;
}

