#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int check(int num);

int check(int num){
    if(0<num<101){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    srand(time(0));
    int checka, inp, num = rand()%100, n = 1;
    while (n == 1)
    {
        printf("Enter your number: ");
        scanf("%d", &inp);
        check(inp);
        printf("%d",checka);
        if (inp == num)
        {
            printf("You found the number!");
            n += 1;
        }
        else if (inp > num)
        {
            printf("Try lower\n");
        }
        else if (inp < num)
        {
            printf("Try higher\n");
        }
    }
    return 0;
}