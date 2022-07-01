#include <stdio.h>

/**
*main - Entry point
*
*Return: always 0 (success)
*/

int main(void)
{  
char c;
int i;
long int 1;
long long int 11;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of a int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(1));
printf("Size of a long long int: %lu byte(s)\n", sizeof(11));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
