/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelhach <amelhach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 08:47:13 by amelhach          #+#    #+#             */
/*   Updated: 2025/11/02 09:17:15 by amelhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	size_t				i;

	d = dest;
	if (d <= s)
		return (ft_memcpy(dest, src, n));
	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}
