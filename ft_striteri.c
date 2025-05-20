/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_striteri.c                                     :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/13 12:09:56 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 13:46:56 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//#include <stdio.h>
//
//void	test_function(unsigned int i, char *c)
//{
//	printf("%d", i);
//	*c = *c + 1;
//}
//
//int main()
//{
//    char test[] = "tested";
//    printf("Before: %s\n", test);
//    ft_striteri(test, test_function);
//    printf("\nAfter: %s\n", test);
//    return 0;
//}
