#include<stdio.h>
int main(){
    //program to convert temperature in celsius to fahrenheit and vice-versa
    float temp,convertedTemp;
    int option;
    printf("temperature conversion option\n");
    printf("1.convert celsius to fahrenheit \n");
    printf("2.convert fahrenheit to celsius \n");
    printf("enter your option (1 or 2):");
    scanf("%d",& option);
    if(option==1){
        printf("enter temperature in celsius:");
        scanf("%f",& temp);
        convertedTemp=(temp*9/5)+32;
        printf("%.2f celsius is equal to %2.f fahrenheit\n",temp,convertedTemp);

    }
    else{
        printf("invalid option! please select right option\n");
        return 0;
    }
}