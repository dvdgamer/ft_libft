/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstdelone.c                                    :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/16 11:41:38 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/19 17:55:47 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free (lst);
}
