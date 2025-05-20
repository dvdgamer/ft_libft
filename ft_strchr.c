/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strchr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 12:58:59 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 16:36:04 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	while (*str != ch)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *) str);
}

//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//	char str[] = "Hello";
//	printf ("%s\n", strchr(str, 111));
//	printf ("%s\n", ft_strchr(str, 111));
//	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//	printf("%s\n", strchr(src, '\0'));
//	printf("%s\n", ft_strchr(src, '\0'));
//	return 0;
//}
//
///* char	*ft_strchr(const char *str, int c) */
///* { */
///* 	int	i; */
///**/
///* 	i = 0; */
///* 	while (str[i] != '\0') */
///* 	{ */
///* 		if (str[i] == (unsigned char)c) */
///* 			return ((char *)&str[i]); */
///* 		i++; */
///* 	} */
///* 	return (NULL); */
///* } */
///**/
