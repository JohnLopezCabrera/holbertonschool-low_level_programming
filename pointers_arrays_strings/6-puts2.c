#include "main.h"
/**
 *puts2 - prints every second char
 *
 *@str: variable
 **/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
if (str[i + 1] != '\0')
i += 2;
else
break;
}
_putchar('\n');
}
