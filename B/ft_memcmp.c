/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:16:26 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:46:08 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_memcmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = -1;
	if (!s1 || !s2)
		return (0);
	while (++i < n)
		if (s1[i] != s2[i])
			return (0);
	if (s1[n] == '\n')
		return (1);
	return (0);
}
