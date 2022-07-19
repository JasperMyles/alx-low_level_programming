#include "main.h"

/**
 * _mempcy: function copies
 * @n: bytes of the memory
 * @src: memory area
 * @dest: memory ara
 * Return: dest to the pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
  unsigned int i;

  for (i = 0; i < n; i++)
      dest[i] = src[i];

	return (dest);

}
