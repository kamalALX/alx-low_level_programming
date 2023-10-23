#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s: ointer value
 * @to: value pointed to
*/

void set_string(char **s, char *to)
{
    *s = to;
}
