/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isascii.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/25 11:26:15 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/25 11:26:15 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
//
// #include <stdio.h>
// #include <ctype.h>
//
// int main()
// {
// 	printf("%d", isascii(0));
// 	return 0;
// }
