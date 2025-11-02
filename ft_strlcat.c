/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelhach <amelhach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 08:47:52 by amelhach          #+#    #+#             */
/*   Updated: 2025/11/02 09:10:09 by amelhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	i = 0;
	while (src[s] != '\0')
		s++;
	if (!size)
		return (s);
	while (d < size && dst[d] != '\0')
		d++;
	if (d == size)
		return (size + s);
	while (src[i] && (d + i + 1) < size)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
