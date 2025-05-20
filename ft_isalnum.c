/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isalnum.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/24 13:15:54 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/24 13:15:54 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
//
// int main ()
// {
//
//  printf("%d", ft_isalnum('0'));
//  printf("%d", ft_isalnum('A'));
//  printf("%d", ft_isalnum('\n'));
//  printf("%d", ft_isalnum(' '));
//  return 0;
// }
//
