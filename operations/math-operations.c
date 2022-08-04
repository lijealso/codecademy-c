#include <stdio.h>

int main() {
  
  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here

  booksSold+= 200;
  totalSalesValue = bookCost * booksSold;
  totalSalesValue /= 2;


  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
}