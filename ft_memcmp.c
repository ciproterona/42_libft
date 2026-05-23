/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:45:33 by eroque-d          #+#    #+#             */
/*   Updated: 2026/05/23 13:53:02 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	i = 0;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (i < n)
	{
		if (s1p[i] == s2p[i])
			i++;
		else
			return ((unsigned char)s1p[i] - (unsigned char)s2p[i]);
	}
	return (0);
}
