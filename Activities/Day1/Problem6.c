#include <stdio.h>
 
int main()
{
    int n, i, term1 = 0, term2 = 1, nextterm = 0;
    printf("Enter the nth term for fibonacci sequence: ");
    scanf("%d", &n);
    if(n == 0 || n == 1){
        printf("%d", n);
    }
   
    else{
        nextterm = term1 + term2;
    }
   
    for (i = 3; i<=n; i++)
    {
        term1 = term2;
        term2 = nextterm;
        nextterm = term1 + term2;
    }
    printf("%d \n", term2);
}
