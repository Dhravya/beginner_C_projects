#include<stdio.h>

int main(){
    int sum = 0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Printing the answer for %d\n", n);
    for(int i =0;i<11;i++){
        sum = sum+(i*n);
        printf("The sum so far is %d\n", sum);
    }
    printf("The final answer is %d", sum);
    return 0;
}