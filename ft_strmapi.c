/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strmapi.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/13 11:50:45 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 13:46:13 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*return_string;

	if (!s)
		return (NULL);
	return_string = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!return_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		return_string[i] = f(i, s[i]);
		i++;
	}
	return_string[i] = '\0';
	return (return_string);
}

//#include <stdio.h>
//
//char	test_function(unsigned int i, char c)
//{
//	printf("%d", i);
//	return (c + 1);
//}
//
//int main ()
//{
//	char test[] = "tested";
//
//    printf("%s\n", ft_strmapi(test, test_function));
//    return 0;
//}
//
