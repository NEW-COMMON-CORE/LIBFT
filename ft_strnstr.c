/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelhach <amelhach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 08:48:29 by amelhach          #+#    #+#             */
/*   Updated: 2025/11/02 09:08:21 by amelhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	j;

	i = 0;
	j = 0;
	if (!big && little && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (little[j] != '\0')
		j++;
	while (i < len && big[i] != '\0')
	{
		n = 0;
		if (big[i] == little[n])
		{
			while (big[i + n] == little[n] && n < j && i + n < len)
				n++;
			if (n == j)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
