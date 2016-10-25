#include <stdio.h>
#include <conio.h>

/* Function to convert a decimal number to binary number */
long DecimalToBinary(long n) {
  int remainder;
  long binary = 0, i = 1;

  while(n != 0) {
    remainder = n%2;
    n = n/2;
    binary= binary + (remainder*i);
    i = i*10;
  }
  return binary;
}
int main() {
  long decimal;
  printf("Please Enter a decimal number : ");
  scanf("%ld", &decimal);
  printf("Binary number of %ld is %ld\n", decimal, DecimalToBinary(decimal));

  getch();
  return 0;
}

/*
OUTPUT:
Please Enter a decimal number : 7
Binary number of 7 is 111
*/
