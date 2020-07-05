#include "libasm.h"
#include <stdio.h>

int		main(void)
{
	char	*str = "abcd";
	char	*str2;

	printf("%s | ft_strlen: %d\n", str, ft_strlen(str));
	str2 = ft_strcpy(str2, str);
	printf("ft_strcpy: %s\n", str2);
	return (0);
}