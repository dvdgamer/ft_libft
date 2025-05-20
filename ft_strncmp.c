/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strncmp.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 14:47:28 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 15:08:59 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//	char str[] = "12346";
//	char str2[] = "12348";
//	printf("%d\n", ft_strncmp(str, str2, 2));
//	char *s1 = "";
// 	char *s2 = "AAAAAA";
// 	int i1 = ((strncmp(s1, s2, 6) > 0) ? 1 : 
// 	((strncmp(s1, s2, 6) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(s1, s2, 6) > 0) ? 1 :
// 	((ft_strncmp(s1, s2, 6) < 0) ? -1 : 0));
//	printf("i1 :%d\n", i1);
//	printf("i2 :%d\n", i2);
//	return 0;
//}
