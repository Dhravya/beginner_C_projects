#include<stdio.h>

int factorial(int x);

int main(){
    int a = factorial(5);
    printf("The factorial of 3 is %d", a);
    return 0;
}

int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x += factorial(x-1);
    }   
}

// 1 x 2 x 3 x 4 x 5 x .....x n-1 x n