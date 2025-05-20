/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_toupper.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/05/04 12:45:45 by dponte       #+#    #+#                  */
/*   Updated: 2025/05/04 12:56:16 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

//#include <stdio.h>
//
//int main ()
//{
//	char a = 'a';
//	char z = 'z';
//	char e = '`';
//	char f = '{';
//	printf("a: %c\n", ft_toupper(a));
//	printf("z: %c\n", ft_toupper(z));
//	printf("e: %c\n", ft_toupper(e));
//	printf("f: %c\n", ft_toupper(f));
//	return 0;
//}
//
