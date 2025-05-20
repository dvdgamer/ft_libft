/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_substr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/08 15:32:12 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/08 16:16:13 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	ft_strlcpy(substr, &s[start + i], len + 1);
	return (substr);
}

//#include <stdio.h>
//int main ()
//{
//	char test[] = "test1test2test3";
//	char test2[] = "abcdefghiklmn";
//	printf("%s\n", ft_substr(test2, 2, 7));
//	return 0;
//}
//
