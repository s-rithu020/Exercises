#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Give three sides: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a==b && b==c && c==a){
        printf("Its an equilateral triangle");
    }
    else if (a==b||b==c||a==c){
        printf("Its an Isosceles triangle");
    }
    else if (a!=b!=c){
        printf("Its an Scalene triangle");
    }

   return 0;
}
