#include <stdio.h>

int main() {
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

}