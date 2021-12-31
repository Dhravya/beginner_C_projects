#include<stdio.h>

int area(int side);
int main(){
    int side, are;
    printf("Enter the length of the side: ");
    scanf("%d",&side);
    are = area(side);
    printf("The area of a square with side %d is %d", side, are);
    return 0;
}
int area(int side){
    return (side*side);   
}