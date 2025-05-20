/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strnstr.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 16:07:49 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 17:44:21 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && (i + j) < len && big[i + j])
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
//
//#include <stdio.h>
//#include <string.h>
//
//
//int main ()
//{
//    char big[] = "This the very big char, ya feel me?";
//	char big2[] = "brebrebrebrebbbbbreak";
//	char little[] = "feel";
//	char little2[] = "break";
//
//	printf("\n---------------\n");
//    printf("test 1:%s\n", (char *)ft_strnstr(big, little, strlen(big)));
//	printf("\n---------------\n");
//    printf("test 2:%p\n", ft_strnstr(big, little, 20));
//	printf("\n---------------\n");
//    printf("test 3:%p\n", ft_strnstr(big2, little2, strlen(big2)));
//	printf("\n---------------\n");
//    printf("test 4:%p\n", ft_strnstr(big2, little2, strlen(big2) + 40));
//    return 0;
//}
//
