/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 21:12:34 by eroque-d          #+#    #+#             */
/*   Updated: 2026/05/16 22:07:42 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H

int	ft_isalpha(char *letter);
int	ft_isalnum(char *alnum);
int	ft_isdigit(char *digit);
int	ft_isprint(int c_ascii);
int	ft_isascii(char *c_ascii);
int ft_strlen(char *str);
void	*ft_memset(void *s, int x, size_t n);
int	ft_atoi(char *str);
void	*ft_memset(void *ptr(int), int x, size_t n);

#endif
