/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstclear.c                                     :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/16 12:22:34 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/16 12:31:24 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	curr = *lst;
	while (*lst)
	{
		curr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = curr;
	}
	free(*lst);
	*lst = NULL;
}
