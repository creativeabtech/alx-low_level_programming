#include "main.h"
/**
 *print_alphabet_x10-print alphabet
 *
 *Return: 0
 *
 */

void print_aphabet_10(void)
{
  int start = 0;
  char letter = 'a';
  
  while (start <=10)
    {
      letter = 'a';
      while (letter <= 'z')
	{
	  _putchar(letter);
	  letter++;
	}
      _putchar('\n');
      start++;
    }
}
