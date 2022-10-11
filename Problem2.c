#include <stdio.h>

int main()
{
    int x, i, f=0;
    printf("Enter a number to check if prime: ");
    scanf("%d", &x);
    if (x == 0 || x == 1){
        //printf("%d is not a prime", x);
        f=1;
    }
    for (i = 2; i<=x/2; i++){
        if(x%i==0){
            //printf("%d is not a prime", x);
            f=1;
            break;
        }
    }
    if (f==0){
        printf("%d is a prime\n", x);
    }
    else {
        printf("%d is not a prime\n", x);
    }

   return 0;
}
