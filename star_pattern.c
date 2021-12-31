#include<stdio.h>

void print_pattern(int lines);

int main(){
    int inp;
    printf("How many lines?: ");
    scanf("%d", &inp);
    print_pattern(inp);
    return 0;
}

void print_pattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    print_pattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
