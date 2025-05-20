/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memmove.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/28 17:36:54 by dponte       #+#    #+#                  */
/*   Updated: 2025/04/29 11:34:56 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	if (!dest && !src)
		return (0);
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (dest <= src)
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	else if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}

/* #include <stdio.h>  */
/* #include <string.h>  */
/**/
/* int main()  */
/* {  */
/* 	char csrc[100] = "Here at 42 we like to have fun! Right??";  */
/* 	ft_memmove(csrc+5, csrc, strlen(csrc)+1);  */
/* 	printf("%s", csrc);  */
/* 	return 0;  */
/* }  */
