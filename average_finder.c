#include<stdio.h>
int average(int a, int b, int c);

int main(){
    printf("the average of 234,2346 and 304832 is %f",average(234,2346,304832));
    return 0;
}
int average(int a, int b, int c){
    return (float)((a+b+c)/3);
}