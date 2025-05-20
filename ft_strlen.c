/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strlen.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/25 13:03:01 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/25 13:03:01 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

//#include <stdio.h>
//
//int main ()
//{
//	char test[] = "Hello";  
//  printf("%ld", ft_strlen(test));
//  return 0;
//}
//
