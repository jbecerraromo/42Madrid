/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:29:23 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/07 13:28:45 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		change;

	i = 0;
	while (i < (size / 2))
	{
		change = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = change;
		i++;
	}
}
