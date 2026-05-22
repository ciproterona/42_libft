/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:51:29 by eroque-d          #+#    #+#             */
/*   Updated: 2026/05/19 16:56:40 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	int	size;

	size = ft_strlen(str);
	while (size >= 0)
	{
		if (str[size] == (char)to_find)
			return ((char *)&str[size]);
		size--;
	}
	return (0);
}
