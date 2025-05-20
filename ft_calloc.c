/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_calloc.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/05 06:25:44 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/05 14:09:48 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

//int main ()
//{
//	void* calloced_mem = ft_calloc(5, sizeof(int));
//	/* printf("%p\n", ft_calloc(5, 5)); */
//	printf("%p\n", calloced_mem);
//
//    return 0;
//}
