#include<stdio.h>
int main(){
    float centigrade;
    float fahrenheit;
    printf("enter the value of temprature");
    scanf("%f",&centigrade);
    fahrenheit=((9*centigrade)/5+32);
    printf("fahrenheit=%f",fahrenheit);
}

