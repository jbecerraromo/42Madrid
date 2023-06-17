/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:07:03 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/08 17:19:49 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}
