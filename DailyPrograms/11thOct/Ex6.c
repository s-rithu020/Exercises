#include <stdio.h>
#include <stdlib.h>

int function1()
{
    int A = 0xABCDEF01;
    void* ptr = &A;
    char* ptr_c = &A;
    int* ptr_i= &A;
    float* ptr_f = &A;

    printf("%c, %d, %f", *ptr_c, *ptr_i, *ptr_f);
    printf("%d, %d, %lf", *ptr_c, *ptr_i, *ptr_f);
}
int main()
{
    

    void* ptr;
    char* ptr_c;
    int* ptr_i;
    float* ptr_f;

    printf("%lu %lu %lu %lu", sizeof(ptr_c), sizeof(ptr_i), sizeof(ptr_f), sizeof(ptr));

}