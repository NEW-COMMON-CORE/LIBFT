/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelhach <amelhach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:36:00 by amelhach          #+#    #+#             */
/*   Updated: 2025/11/02 09:11:00 by amelhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*res;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	res = malloc((len) * sizeof(char));
	if (!res)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		res[len] = s[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}
