#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
  size_t j;
  int *i;
  
  if (nitems == 0 || size == 0)
  {
    nitems = 1;
    size = 1;
  }
  j = nitems * size;
  i = malloc(j);
  if (!i)
    return (NULL);
  else
    ft_bzero(i, j);
  return (i);
}

/*
int main(void)
{
  int *ptr;
  int i;
  int n;
  
  ptr = (int*)ft_calloc(n, sizeof(int));
  for (i = 0; i < n; ++i)
  {
    ptr[i] = i + 1;
  }
	for (i = 0; i < n; ++i)
  {
		printf("%d, ", ptr[i]);
	}
}
*/