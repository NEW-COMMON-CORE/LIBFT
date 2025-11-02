/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelhach <amelhach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:44:43 by amelhach          #+#    #+#             */
/*   Updated: 2025/11/02 09:51:29 by amelhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sc;
	size_t	length;

	if (!s)
		return (NULL);
	length = 0;
	while (s[length])
		length++;
	if (start >= length)
		return (ft_strdup(""));
	if (len > length - start)
		len = length - start;
	sc = malloc((len + 1) * sizeof(char));
	if (!sc)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sc[i] = s[start + i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
