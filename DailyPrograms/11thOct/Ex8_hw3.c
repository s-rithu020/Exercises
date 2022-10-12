#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *f = fopen(argv[1], "r");
    char buffer[50];
    int count = 0;
    char ch;
    if(argc < 2){
        printf("Usage:<executable> <arguments>\nss");
        exit(0);
    }

    do{
        buffer[count] = fgetc(f);
        count++;
        //printf("%c", ch);
    }while(buffer[count-1]!='\n');
    //printf("\n");
    char *val = strtok(buffer, ", ");
    int psno = atoi(val);

    char *name = strtok(NULL, ", ");

    char *mail = strtok(NULL, ", ");

    //printf("%d %s %s", psno, name, mail);
    printf("PS Number: %d\n", psno);
    printf("Name: %s\n", name);
    printf("Email: %s\n", mail);
    //printf("%s", buffer);
    fclose(f);
}
