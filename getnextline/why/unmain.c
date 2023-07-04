#ifndef UNMAIN_C
# define MAIN_C
# include <stdlib.h>
# include <unistd.h>

# define BUF 10

char	*red_ham(int fd)
{
	char	*coal;

	coal = malloc(1000);
	read(fd, coal, BUF);
	return (coal);
}

#endif
