/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;
  float avg;

  printf("Enter the marks of first subject: ");
  scanf("%d", &mark1);
  printf("Enter the marks of second subject: ");
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2.0;

  printf("The average is %.2f", avg);

  return 0;
}
