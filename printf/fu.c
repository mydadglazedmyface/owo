#include <stdio.h>
#include <stdarg.h>

void print_values(const char *watafak, ...)
{
    va_list args;
    
    va_start(args, watafak);

	for (int i = 0; i < 10; i++)
	printf("%s\n", watafak);

    va_end(args);
}

int main()
{
    print_values("mydingdong");
    return 0;
}
