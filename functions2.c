#include<stdio.h>
int sum(int a, int b);

int main(){
    int ans;
    ans =sum(2,59);
    printf("%d", ans);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}
