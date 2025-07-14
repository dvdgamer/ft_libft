/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_count_digits.c                                 :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/06/09 13:02:53 by dponte       #+#    #+#                  */
/*   Updated: 2025/06/09 13:03:06 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
