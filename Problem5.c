#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    double root;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d<0){
        printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    }
    else{
        root = (-b + sqrt(d))/(2*a);
        printf("First root = %.2lf\n", root);
    }
    return 0;
    
}
