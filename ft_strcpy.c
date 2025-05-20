/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strcpy.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/08 15:12:23 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/08 15:24:21 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*start;

	start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}
