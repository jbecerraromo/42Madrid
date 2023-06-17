/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:41:14 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/13 18:25:08 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		len_dest;
	unsigned int		len_src;

	i = 0;
	j = 0;
	len_dest = ft_len(dest);
	len_src = ft_len(src);
	if (size == 0 || size < len_dest)
		return (len_src + size);
	while (src[i] != '\0' && len_dest < (size - 1))
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (len_dest + len_src);
}
