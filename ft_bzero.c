/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 21:43:50 by eroque-d          #+#    #+#             */
/*   Updated: 2026/06/03 14:01:19 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	index = 0;
	ptr = (unsigned char *)s;
	while (index < n)
	{
		ptr[index] = 0;
		index++;
	}
	return (s);
}
