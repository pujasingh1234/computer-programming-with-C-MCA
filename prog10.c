#include<stdio.h>
int main(){
    //c program to check whether the number is palindrome or not
    int n, remainder, original,reversed=0;
    printf("enter a number:");
    scanf("%d",& n);
    original=n;
    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;

    }
    if(original==reversed)
    printf("%d is a palindrome",original);
     else
     printf("%d is not a palindrome",original);
     return 0;
}