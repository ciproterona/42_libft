/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:55:19 by eroque-d          #+#    #+#             */
/*   Updated: 2026/05/23 16:38:43 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*malloc_size;

	if (size > 0 && count > (SIZE_MAX / size))
		return (NULL);
	total = count * size;
	malloc_size = malloc(total);
	if (malloc_size == NULL)
		return (NULL);
	ft_bzero(malloc_size, total);
	return (malloc_size);
}
