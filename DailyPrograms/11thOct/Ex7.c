#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen(argv[1], "r");
    printf("Count= %d, Argument= %s\n", argc, argv[0]);
    printf("%s\n", argv[2]);
    printf("%d\n", argc);
    char buffer[1000];
    while (fgets(buffer, 1000-1, f) != NULL)
    {
        printf("%s\n", buffer);
    }
    fclose(f);
}