/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memcmp.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 15:46:39 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 16:07:17 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//	char str1[] = "Helloop";
//	char str2[] = "Hellooo";
//
//	char *s1 = "\xff\xaa\xde\x12";
// 	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
// 	size_t size = 4;
//
//    printf("memcmp: %d\n", memcmp(s1, s2, size));
//    printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, size));
//    printf("%d\n", memcmp((const void *)str1, (const void *)str2, 8));
//    printf("%d\n", ft_memcmp((const void *)str1, (const void *)str2, 8));
//    return 0;
//}
//
