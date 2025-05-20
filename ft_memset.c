/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memset.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/04/25 13:08:08 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/13 15:20:39 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *s, int c, int n)
{
	int		i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
//
// int main ()
// {
// 	char test_string[12] = "testtesttest"; 
//
// 	memset(test_string, 'f', 6*sizeof(char));
// 	printf("after memset: %s\n", test_string);
//
//
// 	ft_memset(test_string, 'd', 6*sizeof(char));
// 	printf("after ft_memset: %s\n", test_string);
//  return 0;
// }
