#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store I's address
    int **k = &j;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n", *j);

    printf("The address of i is %d\n", &i);
    printf("The address of i is %d", j);

    printf("");
    return 0;
}