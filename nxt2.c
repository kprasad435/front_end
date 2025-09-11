#include<stdio.h>
int main(){
    float radius;
    float volume;
    float pi=3.14159;
    printf ("Enter radius of sphere");
    scanf ("%f",&radius);
    volume=((4*pi*radius*radius*radius)/3);
    printf("volume=");
    printf("%",volume);
}

