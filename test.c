/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:20:22 by hna               #+#    #+#             */
/*   Updated: 2020/07/20 15:24:24 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <errno.h>
#include <stdio.h>
#include <string.h>

void	basic_test(void)
{
	char	str[100];

	printf("============ft_strlen test============\n");
	strlcpy(str, "hello world", 100);
	printf("%s|ft_strlen: %d\n", str, ft_strlen(str));
	strlcpy(str, "", 100);
	printf("%s|ft_strlen: %d\n", "", ft_strlen(""));
	strlcpy(str, "12345", 100);
	printf("%s|ft_strlen: %d\n", str, ft_strlen(str));
	printf("============ft_strcpy test============\n");
	ft_strcpy(str, "copied string");
	printf("%s\n", str);
	printf("============ft_strcmp test============\n");
	printf("s1:abcd\ns2:abcd\n");
	printf("ft_strcmp: %d\n", ft_strcmp("abcd", "abcd"));
	printf("s1:abc\ns2:abcd\n");
	printf("ft_strcmp: %d\n", ft_strcmp("abc", "abcd"));
	printf("strcmp: %d\n", strcmp("abc", "abcd"));
	printf("s1:abcd\ns2:abc\n");
	printf("ft_strcmp: %d\n", ft_strcmp("abcd", "abc"));
	printf("strcmp: %d\n", strcmp("abcd", "abc"));
}

void	write_read_dup_test(void)
{
	int		i;
	int		ret;
	char	str[100];
	char	*str3;

	i = -1;
	printf("===========ft_write test============\n");
	ret = ft_write(1, "ft_write: hello world\n", 23);
	printf("ft_write return: %d\n", ret);
	printf("===========errno test===============\n");
	printf("ft_write(192, 'test', 1);\n");
	ft_write(192, "test", 1);
	if (errno)
		printf("error: %s\n", strerror(errno));
	printf("==============ft_read test=============\n");
	while (++i < 100)
		str[i] = 0;
	ret = ft_read(0, (void *)str, 100);
	printf("ft_read: %s", str);
	printf("===============ft_strdup test==========\n");
	str3 = ft_strdup("duplicated string");
	printf("ft_strdup: %s\n", str3);
}

int		main(void)
{
	int		ret;
	char	str[100];

	basic_test();
	write_read_dup_test();
	return (0);
}
