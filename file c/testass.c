#include <stdio.h>
#include<stdbool.h>
int main(){
float c=78;

switch((int)c){
    case 0 ... 59: printf("f"); break;
    case 60 ... 79: printf("f"); break;
    case 80 ... 100: printf("f"); break;
    
}

 

return 0;
}