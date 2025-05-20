/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putnbr_fd.c                                    :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/13 13:57:38 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 14:16:10 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}

//#include <stdio.h>
//
//int main ()
//{
//	ft_putnbr_fd(555555555, 1);
//	printf("\n");
//	ft_putnbr_fd(123456, 1);
//	printf("\n");
//	ft_putnbr_fd(0000, 1);
//	printf("\n");
//	ft_putnbr_fd(-654321, 1);
//    return 0;
//}
//
