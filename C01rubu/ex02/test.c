#include <stdio.h>

void swap1(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main()
{
    int a = 42;
    int b = 17;


    int *pa = &a;
    int *pb = &b;

    printf("--------Swap1---------\n");
    printf("a = %d\n b = %d\n", a, b);
    swap1(pa, pb);
    printf("a = %d\n = %d\n", a, a);
    printf("pb address =  %p\n", pa);
    printf("pa address =  %p\n", pb);
}

