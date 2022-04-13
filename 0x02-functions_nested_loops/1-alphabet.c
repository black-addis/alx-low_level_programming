#include "main.h"
/**
*main-main block
*print_alphabet - prints lowercase letters followed by new line
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
