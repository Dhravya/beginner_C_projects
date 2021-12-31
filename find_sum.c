#include<stdio.h>

int main(){
    int i=1, sum = 0,n;
    printf("Enter the value to analyze: ");
    scanf("%d",&n);
    /*
    // Using For loop
    for(int i =0;i<=n;i++){
        sum = i + sum;
        printf("%d \n", sum);
    }
    printf("The final sum is %d", sum);
    */
//////////////////////////////////////////////////
   /*
   // Using While loop
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The answer is %d",sum);
    */
////////////////////////////////////////////////////
    // Using Do-While loop
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    printf("The answer is %d", sum);
    return 0;

}