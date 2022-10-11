#include <stdio.h>  
#include <string.h>

int main()  
{
    char str[100];
    printf("Enter a String:\n");
    scanf("%s", str);
    for(int i = 0; i<strlen(str); i++){
        for(int j = i+1; j <strlen(str); j++){
            if(str[i] == str[j]){
                printf("The string is not isogram\n");
                return 0;
            }
        }
    }
    printf("The string is isogram\n");

}