/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n, i;
  int sum = 0;

  //user input
  printf("Enter the n th value: "); 
  scanf("%d", &n);

  //calculation
  for(i = 1; i <= n; i++)
    {
      sum = i + sum; 
    }

  //output
  printf("The sum is %d", sum);
    
  return 0;
}

