/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstiter.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/18 19:23:06 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/18 19:28:35 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	curr = lst;
	while (curr)
	{
		f(curr->content);
		curr = curr->next;
	}
}
