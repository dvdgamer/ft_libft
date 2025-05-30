/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isspace.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/05 13:55:39 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/05 13:55:44 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
