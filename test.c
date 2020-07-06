#include "libasm.h"
#include <errno.h>
#include <stdio.h>
#include <string.h>

int		main(void)
{
	int		ret;
	char	*str = "abcd";
	char	str2[100];
	char	*str3;

	printf("%s | ft_strlen: %d\n", str, ft_strlen(str));
	ft_strcpy(str2, str);
	printf("ft_strcpy: %s\n", str2);
	printf("ft_strcmp: %d\n", ft_strcmp("abcd", "abcc"));
	ret = ft_write(1, "ft_write: hello world\n", -23);
	printf("ft_write return: %d\n", ret);
	if (errno)
		printf("error: %s\n", strerror(errno));
	ret = ft_read(0, (void *)str2, 100);
	printf("ft_read: %s\n", str2);

	str3 = ft_strdup("Hello duplicated world\n");
	printf("ft_strdup: %s\n", str3);
	return (0);
}
