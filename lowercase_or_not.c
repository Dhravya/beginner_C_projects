#include<stdio.h>

int main(){
    // 97 -- 122 = abc...z
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122){
        printf("%c is lowercase",ch);
    }
    else{
        printf("%c is not lowercase",ch);
    }
    return 0;

}