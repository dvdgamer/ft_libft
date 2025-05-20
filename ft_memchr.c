/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memchr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 14:57:20 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 15:45:50 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	ch = (unsigned char) c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//	char str[] = "  Hello  ";
//	void *result_ft = ft_memchr((const void *) str, 'l', 9);
//    void *result_std = memchr((const void *) str, 'l', 9);
//
//	char *src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
// 	int size = 12;
//
//	printf("%c\n", *(char *)result_ft);
//	printf("%c\n", *(char *)result_std);
//	printf("%p\n", memchr((const void *) str, 'l', 9));
//	printf("%p\n", ft_memchr((const void *) str, 'l', 9));
//	printf("%c\n", *(char *)memchr((const void *) str, 'l', 9));
//	printf("%c\n", *(char *)ft_memchr((const void *) str, 'l', 9));
//	return 0;
//}
//
