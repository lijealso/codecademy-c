#include <stdio.h>

int main() {

  int i = 99;

  // Write your loop here
  for (int j = 99 ; j >= 0 ; j--)
  {
    printf("%d bottles of pop on the wall.\n", i);
    printf("Take one down and pass it around.\n");
    i--;
    printf("%d bottles of pop on the wall.\n", i);
  }
}