#include <stdio.h>

int main()
{
    float i = 1.1;
    switch (i)
    {
    case 1.1: printf("Hi");
        break;
    
    default: printf("Hello");
        break;
    }
}

//comments: Throws an error saying "Switch quantity not an integer"
//"case label does not reduce to an integer constant"