#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], alph, i;
    int cnt = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter an alphabet to find its frequency: ");
    scanf("%c", &alph);

    for (i = 0; str[i] != '\0'; i++) {
        if (alph == str[i])
            cnt++;
    }

    printf("Frequency of %c is %d\n", alph, cnt);
    return 0;
}
