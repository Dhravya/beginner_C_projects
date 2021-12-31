#include <stdio.h>

int fib(int n);

int main(){
    int ans ;
    printf("The third element of fibonacci series is %d",fib(3));
    return 0;
}

int fib(int n){
    fib(n-1)+fib(n-2);
    return fib(n);
}
