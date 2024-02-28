#include "main.h"
/**
 *_strlen - returns the length of the string
 * @string: string to evaluate
 *
 *Return:length
 */
int _strlen(char *string)
{
int length = 0;
while (string[length] != '\0')
{
length++;
}
return (length);
}
