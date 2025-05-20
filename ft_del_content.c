/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_del_content.c                                  :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/15 16:49:41 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/15 16:50:13 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_del_content(void *content)
{
	if (content)
		free (content);
}
