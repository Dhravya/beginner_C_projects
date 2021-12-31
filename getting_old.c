#include<stdio.h>

int main(){
    int life=0;
    while (1==1)
    {
        if (life == 10){
            printf("You are 10 years old!\n");

        }
        else if (10< life || life < 18){
            printf("you are a teen %d\n", life);

        }
        else if (life == 80){
            printf("You died.\n");
            break;
        }
        printf("IM outside the loops");
        life +=1;
    }
 
    return 0;

}