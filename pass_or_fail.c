#include<stdio.h>

int main(){
    float sub1, sub2, sub3;

    printf("Enter a subject 1\n");
    scanf("%f",&sub1);    
    printf("Enter a subject 2\n");
    scanf("%f",&sub2);    
    printf("Enter a subject 3\n");
    scanf("%f",&sub3);    

    if (sub1>33 && sub2>33 && sub3>33 && !((sub1+sub2+sub3)/300)<40){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;

}