/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstmap.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/19 14:06:51 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/19 17:34:03 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	curr = lst;
	content = NULL;
	while (curr)
	{
		content = f(curr->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		curr = curr->next;
		ft_lstadd_back(&new_list, new_node);
	}
	return (new_list);
}
