/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstlast.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/15 16:26:02 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/15 16:40:00 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	if (!lst)
		return (NULL);
	curr = lst;
	while (curr->next)
		curr = curr->next;
	return (curr);
}
