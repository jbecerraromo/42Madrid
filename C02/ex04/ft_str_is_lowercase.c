/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowecase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:03:37 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/08 16:09:05 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			i++;
		else
			return (0);
	}
	return (1);
}
