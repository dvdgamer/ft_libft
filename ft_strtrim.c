/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strtrim.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/09 14:16:40 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 15:18:38 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	belongs_to_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	trimmed_str_len;
	char	*returned_string;

	i = 0;
	while (belongs_to_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	if (i > j)
		return (ft_strdup(""));
	while (belongs_to_set(s1[j], set))
		j--;
	trimmed_str_len = j - i + 1;
	returned_string = malloc(trimmed_str_len + 1);
	if (!returned_string)
		return (NULL);
	j = 0;
	while (j < trimmed_str_len)
	{
		returned_string[j++] = s1[i++];
	}
	returned_string[j] = '\0';
	return (returned_string);
}

//#include <stdio.h>
//
//int main() {
//
//	char s1[] = "ababaaaMy name is Simonbbaaabbad";
//	char set[] = "ab";
//	/* printf("%d\n", belongs_to_set('d', "abc")); */
//	/* printf("%d\n", belongs_to_set('c', "abc")); */
//	printf("%s\n", ft_strtrim(s1, set));
//	printf("%s\n", ft_strtrim(" 2 ", " "));
//	printf("%s\n", ft_strtrim("abaabababbabaabb1asbabaa", set));
//	printf("%s\n", ft_strtrim("abaab", set));
//	return 0;
//}
