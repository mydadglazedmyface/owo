#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	size_t	i = -1;
	char	*a = ft_calloc(1, 1);
	char	*s = calloc(1, i);
	if (!a)
		printf("0");
	else
		printf("1");
	while (!s)
	{
		i /= 2;
		s = calloc(1, i);
	}
	printf(" = %lu", i);
	free(a);
	free(s);
	printf("\n");
	return (0);
}
