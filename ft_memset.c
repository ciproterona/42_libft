/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 21:43:50 by eroque-d          #+#    #+#             */
/*   Updated: 2026/06/08 11:40:34 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int x, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	index = 0;
	ptr = (unsigned char *)s;
	while (index < n)
	{
		ptr[index] = (unsigned char)x;
		index++;
	}
	return (s);
}
