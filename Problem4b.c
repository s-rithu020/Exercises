#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, res;
    printf("Enter two numbers to check LCM: ");
    scanf("%d %d", &a, &b);
    res = (a>b)?a:b;
    while(1){
        if((res%a==0)&&(res%b==0)){
            printf("LCM is %d", res);
            break;
        }
        res++;
    }
    
    return 0;
    
}
