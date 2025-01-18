#include<stdio.h>
int main(){
    //program to check if a given number is a strong number.//
    int i,n,fact,rem,sum,temp=n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("\n");
    while(n){
        i=1,fact=1;
        rem=n%10;
        while(i<=rem);{
            fact=fact+i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }

    if(sum==temp)
    printf("%d is a strong number",temp);
    else
    printf("%d is not a strong number", temp);
    return 0;


}