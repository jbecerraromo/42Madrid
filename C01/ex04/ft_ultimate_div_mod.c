/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesbecer <jesbecer@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:48:18 by jesbecer          #+#    #+#             */
/*   Updated: 2023/06/06 12:55:57 by jesbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}
