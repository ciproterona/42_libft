/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:42:38 by eroque-d          #+#    #+#             */
/*   Updated: 2026/06/08 11:41:51 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)to_find)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)to_find)
		return ((char *)&str[i]);
	return (0);
}
