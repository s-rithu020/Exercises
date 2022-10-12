#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char **argv)
{

    char symb;
    unsigned char symb1;


    FILE *my_file = fopen(argv[1], "rt");
    if (my_file == NULL)
    {
        return 1;
    }
    else
    {
        printf("PS Number: ");
        while((symb = getc(my_file))!=EOF)
        {
            symb1 = (unsigned char) symb;
            if (symb1 >= '0' && symb1 <= '9')
                printf("%c", symb1);
        }
        while (*ptr) { 
            if (isdigit(*ptr)) { 
                long val = strtol(ptr, &ptr, 10); 
                printf("%ld\n", val); 
                }
            else { 
                ptr++; 
            } 
} 
    printf("\n");  
    }
    
    fclose(my_file);
}