#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char *str;
	char *allocated;

	str = "string duplicate with malloc";
	printf("original : base : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied : alloc : $%s$ @ %p\n", allocated, allocated);
	
	//allocated = ft_strdup(str);
	//printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}
