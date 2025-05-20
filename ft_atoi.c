/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_atoi.c                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 17:46:44 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/05 13:58:58 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace((unsigned char)*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		res = res * 10 + (*nptr - 48);
		nptr++;
	}
	return (res * sign);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main ()
//{
//	printf("%d\n",atoi("  \n  244"));
//	printf("%d\n",atoi("  \f  244"));
//	printf("%d\n",atoi("  \r  244"));
//	printf("%d\n",atoi("  -244"));
//	printf("%d\n",atoi("  - 244"));
//	printf("---------------\n");
//	printf("%d\n",ft_atoi("  \n  244"));
//	printf("%d\n",ft_atoi("  \f  244"));
//	printf("%d\n",ft_atoi("  \r  244"));
//	printf("%d\n",ft_atoi("  -244"));
//	printf("%d\n",ft_atoi("  - 244"));
//    return 0;
//}
//
