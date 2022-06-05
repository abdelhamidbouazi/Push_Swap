/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:15:42 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 21:15:57 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	white_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	s;
	int		j;

	i = 0;
	s = 0;
	j = 1;
	white_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			if (str[i] == '-')
				j *= -1;
			i++;
		}
		else
			put_error("Error\n");
	}
	while (str[i] >= 48 && str[i] <= 57)
		s = (s * 10 + str[i++] - 48);
	if (s * j < INT_MIN || s * j > INT_MAX)
		put_error("Error\n");
	return (s * j);
}
