/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_itoa.c                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/12 16:35:55 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/12 17:28:15 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*return_string;

	num = n;
	len = count_digits(n);
	return_string = malloc((len + 1) * sizeof(char));
	if (!return_string)
		return (NULL);
	return_string[len] = '\0';
	len--;
	if (num == 0)
		return_string[0] = '0';
	if (num < 0)
	{
		return_string[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		return_string[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (return_string);
}
//
//#include <stdio.h>
//
//int main ()
//{
//    int test[] = {123456, 0, 0000, -123};
//	int i = 0;
//
//	while (i < 4)
//	{
//		printf("test[%d]: %s\n", i + 1, ft_itoa(test[i]));
//		i++;
//	}
//    return 0;
//}
//
