/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memchr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 14:57:20 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 15:45:50 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;

	ptr = (unsigned char *)s;
	byte = (unsigned char)c;
	while (n--)
	{
		if (*ptr == byte)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
