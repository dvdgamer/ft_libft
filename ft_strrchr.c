/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strrchr.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 13:43:39 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 16:36:31 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	ch;

	i = ft_strlen(str);
	ch = (unsigned char) c;
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

//#include <string.h>
//#include <stdio.h>
//
//int main ()
//{
//	char str[] = "Hello";
//	char *src = "abbb";
//
//	printf ("%s\n", strrchr(str, 'l'));
//	printf ("%s\n", ft_strrchr(str, 'l'));
//	printf ("%s\n", strrchr(src, 'a'));
//	printf ("%s\n", ft_strrchr(src, 'a'));
//	// printf ("%s\n", str);
//	return 0;
//}
