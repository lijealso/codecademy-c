#include <stdio.h>

int main()
{

    int k = 2000;
    int *ptr = &k;

    // Checkpoint 1 code goes here.
    printf("%d\n", *ptr);

    // Checkpoint 2 code goes here.
    *ptr = 961;

    printf("%i\n", k); // Notice how this variable changed value after Checkpoint 2!
}
