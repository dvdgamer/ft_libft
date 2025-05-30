/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_tolower.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 12:56:50 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 12:58:21 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
