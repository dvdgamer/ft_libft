/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_bzero.c                                        :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/28 14:07:19 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/28 14:07:41 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//#include <stdio.h>
//#include <strings.h>
//
//int main ()
//{
//	char test_string[] = "testestest";
//	char *str = test_string;
//	printf("str: %s\n", str);
//	printf("test_string: %s\n", test_string);
//	ft_bzero(test_string, 2);
//	bzero(test_string, 2);
//	printf("test_string: %c\n", test_string[0]);
//	printf("test_string: %c\n", test_string[4]);
//	printf("%s\n", test_string);
// return 0;
//}
//
