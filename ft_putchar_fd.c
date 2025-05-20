/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putchar_fd.c                                   :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/13 12:34:13 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 12:38:44 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
