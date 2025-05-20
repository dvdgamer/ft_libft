/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isalpha.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/24 11:57:39 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/24 11:57:39 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
//
// #include <stdio.h>
//
// int main ()
// {
//  printf("%d", ft_isalpha('0'));
//  printf("%d", ft_isalpha('G'));
//  printf("%d", ft_isalpha('g'));
//  return 0;
// }
//
