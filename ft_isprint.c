/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isprint.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/25 11:36:22 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 15:06:59 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.c>
// int main ()
// {
//
//  return 0;
// }
//
