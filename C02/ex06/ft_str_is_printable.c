/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:48:23 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/09 12:10:15 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			i++;
		else
			return (0);
	}
	return (1);
}
