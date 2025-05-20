/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putendl_fd.c                                   :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/13 13:47:35 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 13:56:22 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

//#include <stdio.h>
//int main(void)
//{
//    printf("Test 1 - Writing to stdout:\n");
//    ft_putendl_fd("Hello, world!", 1);
//
//    printf("Test 2 - Writing to stderr:\n");
//    ft_putendl_fd("This is an error message", 2);
//
//	return 0;
//}
