/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strlcat.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/29 12:40:58 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/29 14:50:29 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen((const char *)src);
	dest_len = ft_strlen((const char *)dest);
	if (!dest && size == 0)
		return (src_len);
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0' && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

//#include <stdio.h>
//#include <bsd/string.h>
//
//int main ()
//{
//	char str[99] = "Testing string for ...";
//	char str2[14] = "Testinggggg";
//	char str3[99] = "Testing string for ...";
//	char str4[14] = "Testinggggg";
//
//	/* ft_strlcat(str, str2, 8); */
//	/* strlcat(str3, str4, 8); */
//	/* ft_strlcat(str, str2, 38); */
//	/* strncat(str3, str4, 38); */
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//	printf("ft_strlcat: %ld\n", ft_strlcat(str3, str4, 88));
//	printf("str3: %s\n", str3);
//	printf("str4: %s\n", str4);
//	return 0;
//}
