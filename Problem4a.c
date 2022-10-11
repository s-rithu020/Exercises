#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, res, i, hcf;
    printf("Enter two numbers to check HCF: ");
    scanf("%d %d", &a, &b);
    res = fmin(a, b);
    for (i=1; i<=res; i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    printf("HCF is %d", hcf);
    return 0;
    
}
