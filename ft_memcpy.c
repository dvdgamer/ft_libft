/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memcpy.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/29 11:31:14 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/29 11:40:33 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//
//int main() 
//{ 
//	char csrc[100] = "Here at 42 we like to have fun! Right??";
//	ft_memcpy(csrc+5, csrc, strlen(csrc)+1);
//	ft_memcpy(NULL, NULL, 2);
//	ft_memcpy(csrc+5, csrc, 0);
//	/* memcpy(NULL, NULL, 2); */
//	printf("%s", csrc); 
//	return 0; 
//} 
