#include<stdio.h>
#include<math.h>
int main(){
    int ques,d=0;
    printf("Enter the number to be checked : ");
    scanf("%d",&ques);
    for(int i=2;i<=ques;i++){
        if(ques%i==0){
            d+=1;
        }
    }
    if(d==1){
        printf("%d is a prime number",ques);
    }
    else{
        printf("%d is not a prime number",ques);
    }
    return 0;
}