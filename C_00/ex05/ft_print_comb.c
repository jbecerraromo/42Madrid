/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:03:25 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/05 20:20:45 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
