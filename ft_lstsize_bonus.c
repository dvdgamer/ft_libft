/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstsize.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/15 16:01:05 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/15 16:40:53 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = lst;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
