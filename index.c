#include <stdio.h>
#include <stdbool.h>

int main()
{
  int x;
  char firstName;
  printf("Enter your name: \n");
  scanf("%s", &firstName);
  printf("Hello, %s! \n", &firstName);
  printf("Enter a number: \n");
  scanf("%d", &x);
  if (x % 2 == 0)
  {
    printf("%d is even.\n", x);
  }
  else
  {
    printf("%d is odd.\n", x);
  }
  return 0;
}