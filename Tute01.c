/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float no1, no2, avg;
  printf("Enter mark 1 : ");
  scanf("%f", &no1);

  printf("Enter mark 2 : ");
  scanf("%f", &no2);

  avg = (no1 + no2) / 2;

  printf("Average is %.2f",avg);
  
  return 0;
}

