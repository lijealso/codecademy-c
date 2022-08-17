#include<stdio.h>

int main() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  
  // Checkpoint 1 code goes here.
  int len = sizeof(arr)/sizeof(double);

  // Checkpoint 2 code goes here.
  for (int i = 0 ; i < len ; i++)
  {
    printf("%f\n", arr[i]);
  }
}