#include<stdio.h>

int main(){
    int a, b;
    char ans;
    printf("Enter a number a\n");
    scanf("%d",&a);
    // printf("Enter a number b\n");
    // scanf("%d",&b);
    
    if (a%2==0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
    
    while (a<50)
    {
        printf("Should i add one to a? (y/n)\n");
        scanf("%c",&ans);
        
        if (ans == "y")
        {
            printf("adding one to a");
            // a+=1;
        }
        
    }
    
    return 0;
}