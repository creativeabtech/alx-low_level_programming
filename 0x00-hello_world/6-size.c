#include <stdio.h>
/**
 *main - main block
 *
 *Return: 0
 */

int main(void)
{
  char a;
  int b;
  long int c;
  long long int d;
  float e;
  printf("Size of a char is: %lu byte(s)\n", "long unsigned int")(sizeof(a));
  printf("Size of an int is: %lu bytes(s)\n","long unsigned int")(sizeof(b));
  printf("Size of a long int is: %lu bytes(s)\n","int")(sizeof(c));
  printf("Size of a long long int is: %lu byte(s)\n","long unsigned int")(sizeof(d));
  printf("Size of a float is: %lu byte(s)\n","long unsigned int")(sizeof(e));
  return(0);
}
