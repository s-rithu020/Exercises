#include <stdio.h>
 
int main()
{
    char str[100];
    int vowels = 0, consn = 0;
    

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i=0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e'
            || str[i] == 'i' || str[i] == 'o'
            || str[i] == 'u' || str[i] == 'A'
            || str[i] == 'E' || str[i] == 'I'
            || str[i] == 'O' || str[i] == 'U')
                vowels++;
        
        else if (str[i] == ' ')
            continue;
 
        else if ((str[i] >= 'a' && str[i] <= 'z'))
            consn++;
    }
    printf("\nNumber of Vowels present: %d", vowels);
    printf("\nNumber of Consonants present: %d\n", consn);
    return 0;
}