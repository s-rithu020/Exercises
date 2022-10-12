#include <stdio.h>

int main(int argc, char **argv)
{
    //file should be given as input
    //use proper variable names
    //PS num is an int
    //name, email are dynamic arrays
    char symb;
    //unsigned char symb1;
    int symb1;
    FILE *my_file = fopen(argv[1], "rt");
    while((symb = getc(my_file))!=EOF)
    {
        //symb1 = (unsigned char) symb;
        if (symb1 >= '0' && symb1 <= '9')
            symb1 = (int) symb;
            printf("%d", symb1);
    }

    //printf("%? ,", arr );
    /*int num;
    if (my_file == NULL)
    {
        printf("Can't open file for reading.\n");
    }
    else
    {
        fscanf(my_file, "%d", &num);
        printf("%d", num);
    }*/
    fclose(my_file);
}