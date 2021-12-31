#include<stdio.h>

int main(){
    int i=1, ans = 1,ques;
    printf("Enter the number you want to get the factorial of: ");
    scanf("%d",&ques);
    // for(int i=1;i<=ques;i++){
    //     ans *= i;
    // }
    while(i<=ques){
        ans *= i;
        i++;
    }
    printf("The answer is %d",ans);
    return 0;
}