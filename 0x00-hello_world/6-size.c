#include <stdio.h>
/**
*main - Entry point
*
*Return: always 0 (success)
*/
int main (void)
{
char c;
int i;
long long int ll;
long int longi;
float d;
 printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
 printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
 printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
 printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longi));
 printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
