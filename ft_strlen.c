/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strlen.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/25 13:03:01 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/25 13:03:01 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*ptr = str;

	while (*ptr)
		ptr++;
	return (ptr - str);
}
