#include <stdio.h>

int main(void)
{
    int numbers[3] = { 1, 2, 3};

    int size = sizeof(numbers) / sizeof(numbers[0]);
    int * p = numbers;
    int * end = p + size;

    for(; p != end; ++p)
    {
        printf("%p ", p);
        printf("%d\n", *p);
    }
}