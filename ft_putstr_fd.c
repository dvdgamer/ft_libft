/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putstr_fd.c                                    :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/13 13:39:26 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 13:45:41 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

//#include <stdio.h>
//int main(void)
//{
//    printf("Test 1 - Writing to stdout:\n");
//    ft_putstr_fd("Hello, world!\n", 1);
//
//    printf("Test 2 - Writing to stderr:\n");
//    ft_putstr_fd("This is an error message\n", 2);
//
//	return 0;
//}
