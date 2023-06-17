/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:32:08 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/12 18:06:22 by jesbecer         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		strant;

	i = 0;
	strant = str[i - 1];
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		if ((strant > 31 && strant < 48) && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		if ((strant > 57 && strant < 65) && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		if ((strant > 90 && strant < 97) && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		if ((strant > 122 && strant <= 126) && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
	strant = str[i];
	i++;
	}
	return (str);
}
