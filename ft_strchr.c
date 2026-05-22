/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:42:38 by eroque-d          #+#    #+#             */
/*   Updated: 2026/05/19 16:46:53 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int to_find)
{
	int	i;

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
