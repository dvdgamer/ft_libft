/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_split.c                                        :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/11 14:34:14 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 15:14:46 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nr_of_strings(char const *s, char c)
{
	int	i;
	int	nr_of_strings;

	i = 0;
	nr_of_strings = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			nr_of_strings++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nr_of_strings);
}

static void	*ft_free_split(char **strings, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

static void	*ft_fill_words(char const *s, char c, char **returned_strings)
{
	int		i;
	int		k;
	int		start;
	char	*new_string;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
		{
			new_string = malloc(i - start + 1);
			if (!new_string)
				return (ft_free_split(returned_strings, k));
			ft_strlcpy(new_string, s + start, i - start + 1);
			returned_strings[k++] = new_string;
		}
	}
	returned_strings[k] = NULL;
	return (returned_strings);
}

char	**ft_split(char const *s, char c)
{
	char	**returned_strings;

	if (!s)
		return (NULL);
	returned_strings = malloc((ft_nr_of_strings(s, c) + 1) * sizeof(char *));
	if (!returned_strings)
		return (NULL);
	return (ft_fill_words(s, c, returned_strings));
}

//int main ()
//{
//	int i;
//
//	char **result = ft_split("test string  today  ", ' ');
//	char **result2 = ft_split("doriitos i like them ", 'i');
//	char **result3 = ft_split(NULL, ' ');
//	char **result4 = ft_split("", ' ');
//	for (i = 0; result[i] ; i++) {
//		printf("Split[%d]:%s\n", i, result[i]);
//	}
//	printf("\n------------- test2 ----------------\n");
//	for (i = 0; result2[i]; i++) {
//		printf("Split[%d]:%s\n", i, result2[i]);
//	}
//	printf("\n------------- test3 ----------------\n");
//	if (result3)
//	{
//		for (i = 0; result3[i]; i++)
//		{
//			printf("Split[%d]:%s\n", i, result3[i]);
//		}
//		for (i = 0; result3[i]; i++)
//			free(result3[i]);
//		free(result3);
//	}
//	else
//	{
//		printf("result3 is NULL\n");
//	}
//	printf("\n------------- test4 ----------------\n");
//	for (i = 0; result4[i]; i++)
//	{
//		printf("Split[%d]:%s\n", i, result4[i]);
//	}
//	if (result4)
//	{
//		for (i = 0; result4[i]; i++)
//			free(result4[i]);
//		free(result4);
//	}
//	else
//	{
//		printf("result4 is NULL\n");
//	}
//	for (i = 0; result[i]; i++)
//		free(result[i]);
//	free(result);
//
//	for (i = 0; result2[i]; i++)
//		free(result2[i]);
//	free(result2);
//	return 0;
//}
