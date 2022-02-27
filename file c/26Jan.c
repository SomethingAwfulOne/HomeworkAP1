#include<stdio.h>
int main(){
    int x = 5;
    int y, z;

    if (1<5){
        printf("in the if-stm: x=%d\n",x);
        printf("x lives at %p\n, &x");
        int x = 10;
        printf("x=%d\n", x);
        if (0<1){
            printf("x=%d\n",x);
        }
    }
    printf("x=%d\n",x);

    float a = 10, c = 3;
    float q = a/c;
    printf("q = 10/3 = %f\n",q);
    printf("10.0/3=%f\n", 10.0/3);
    printf("10/3.0=%d\n", 10/3.0);// the format sepcifier %d does not match the result %f
    // casting allow you to change one type into another
    printf("Float 10/3=%f\n", (float)(10/3)); //result will be 3.00000 because it only turn the number into the float, so the nuber is 3.00000 (because it was an int then turn into the float 3.00000)
    printf("(float) 10/3=%f\n", (float)10/3);

    

return 0;
}