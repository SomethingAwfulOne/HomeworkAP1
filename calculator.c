#include<stdio.h>

float addition(int n){
    float sum = 0;
    float number;
    for(int i=1; i<=n; i++){
        printf("Enter value %d: \n", i);
        scanf("%f", &number);
        sum=sum+number;
    }
    return sum;
}
float division(){
    float num1, num2;
    float div;
    printf("Enter the value to divide: \n");
    scanf("%f", &num1);
    printf("Enter the divider (not 0):\n");
    scanf("%f", &num2);
    div=num1/num2;
    return div;
}
float multiplication(int n){
    float product = 1;
    float number;
    for(int i=1; i<=n; i++){
        printf("Enter value %d: \n", i);
        scanf("%f", &number);
        product=product*number;
    }
    return product;
}
float subtraction(){
    float num1, num2;
    float sub;
    printf("Enter the first value: \n");
    scanf("%f", &num1);
    printf("Enter value to subtract:\n");
    scanf("%f", &num2);
    sub=num1-num2;
    return sub;
}

int main(){
    int choice;
    float result;
    int num;
    char ans;
    printf("Numeric calculation\n");
    printf("Main menu operators choice\n");
    printf("1 - ADDITION\n");
    printf("2 - DIVISION\n");
    printf("3 - MULTIPLICATION\n");
    printf("4 - SUBTRACTION\n");
    printf("5 - QUIT\n");
    printf("Make your choice (1-5): \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: {
        printf("ADDITION OPERATION\n");
        do {
            printf("Enter the number of values to add: \n");
            scanf("%d", &num);
            result=addition(num);
            printf("The results is %0.2f\n", result);
            printf("Would you like to do another addition? (Y/N)\n");
            scanf("%s",&ans); }
        while (ans=='y');
    }
        break;
    case 2: {
        
            printf("DIVISION OPERATION\n");
        do{
            result=division();
            printf("The results is %0.2f\n", result);}
        while (ans=='y');
    }
        break;
    case 3: {
        printf("MULTIPLICATION OPERATION\n");
        do{
        printf("Enter the number of values to add: \n");
        scanf("%d", &num);
        result=multiplication(num);
        printf("The results is %0.2f\n", result);}
        while (ans=='Y');
    }
    case 4: {
        printf("SUBTRACTION OPERATION\n");
        do{
        result= subtraction();
        printf("The results is %0.2f\n", result);}
        while (ans=='y');
    }
    default:
        break;
    }
    
}
