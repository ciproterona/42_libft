/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:49:18 by eroque-d          #+#    #+#             */
/*   Updated: 2026/06/03 14:17:37 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;

	if (!s)
		return (NULL);
	sp = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (*sp == (unsigned char)c)
			return ((void *)sp);
		sp++;
		n--;
	}
	return (NULL);
}
