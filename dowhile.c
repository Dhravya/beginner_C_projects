#include<stdio.h>

int main(){
    int n;
    int i =0;

    scanf("%d",&n);
    do{
        printf("The value of i is %d\n", ++i);
    }while (i<n);
    return 0;
}
