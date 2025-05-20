/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isdigit.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/24 13:08:34 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/24 13:08:34 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
//
// #include <stdio.h>
//
// int main ()
// {
//
//  printf("%d", ft_isdigit('a'));
//  printf("%d", ft_isdigit('0'));
//  return 0;
// }
//
