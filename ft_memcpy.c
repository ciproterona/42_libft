/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:36:07 by eroque-d          #+#    #+#             */
/*   Updated: 2026/06/03 14:16:32 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest || !src)
		return (NULL);
	index = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
