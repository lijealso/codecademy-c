#include <stdio.h>

// Write your code below
void incrementAge(int *agePointer)
{
    *agePointer += 1;
}

int main(void)
{
    int age = 33;
    incrementAge(&age);
    printf("%d\n", age);
}