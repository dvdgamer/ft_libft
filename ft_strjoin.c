/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strjoin.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/09 12:57:05 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/09 14:11:34 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*return_string;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len + s2_len < 1)
		return (ft_strdup(""));
	return_string = malloc(s1_len + s2_len + 1);
	if (!return_string)
		return (NULL);
	ft_strlcpy(return_string, s1, s1_len + 1);
	ft_strlcat(return_string, s2, s1_len + s2_len + 1);
	return (return_string);
}

//#include <stdio.h>
//
//int main ()
//{
//    char s1[] = "abcdef";
//    char s2[] = "ghijklmn";
//
//    printf("result: %s", ft_strjoin(s1, s2));
//    return 0;
//}
//
//
//char	*ft_strjoin(char const *s1, char const *s2)
//{
//	size_t	i;
//	size_t	s1_len;
//	size_t	s2_len;
//	char	*return_string;
//
//	s1_len = ft_strlen(s1);
//	s2_len = ft_strlen(s2);
//	if (s1_len + s2_len < 1)
//		return (ft_strdup(""));
//	return_string = malloc(s1_len + s2_len + 1);
//	if (!return_string)
//		return (NULL);
//	i = 0;
//	while (i < s1_len)
//	{
//		return_string[i] = s1[i];
//		i++;
//	}
//	i = 0;
//	while (i < s2_len)
//	{
//		return_string[s1_len + i] = s2[i];
//		i++;
//	}
//	return_string[s1_len + i] = '\0';
//	return return_string;
//}
