/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelhach <amelhach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 08:44:25 by amelhach          #+#    #+#             */
/*   Updated: 2025/11/02 09:53:27 by amelhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_sign(char c, int *sign, int *i)
{
	if (c == '-')
		*sign = -1;
	(*i)++;
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	long	prev;
	int		i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		ft_sign(str[i], &sign, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = result;
		result = result * 10 + (str[i] - '0');
		if (result < prev && sign == -1)
			return (0);
		else if (result < prev && sign == 1)
			return (-1);
		i++;
	}
	return ((int)(result * sign));
}
