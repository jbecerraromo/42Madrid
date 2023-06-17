/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:27:59 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/08 13:45:01 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
