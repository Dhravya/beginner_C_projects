#include<stdio.h>

int main(){
    int n;
    printf("Enter the required table: ");
    scanf("%d",&n);
    for(int i = 0;i <11;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}