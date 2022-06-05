/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 06:17:46 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:45:41 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "get_next_line.h"

void	do_action(char *action, t_node **a, t_node **b)
{
	if (ft_strlen(action) == 4)
	{
		if (ft_memcmp(action, "rra", 3) || ft_memcmp(action, "rrr", 3))
			r_rotate(*a, 0);
		if (ft_memcmp(action, "rrb", 3) || ft_memcmp(action, "rrr", 3))
			r_rotate(*b, 0);
		return ;
	}
	if (ft_memcmp(action, "sa", 2) || ft_memcmp(action, "ss", 2))
		swap(*a, 0);
	if (ft_memcmp(action, "sb", 2) || ft_memcmp(action, "ss", 2))
		swap(*b, 0);
	if (ft_memcmp(action, "pa", 2))
		push(b, a, 0);
	if (ft_memcmp(action, "pb", 2))
		push(a, b, 0);
	if (ft_memcmp(action, "ra", 2) || ft_memcmp(action, "rr", 2))
		rotate(*a, 0);
	if (ft_memcmp(action, "rb", 2) || ft_memcmp(action, "rr", 2))
		rotate(*b, 0);
}

bool	is_action(char *s)
{
	return (ft_memcmp(s, "sa", 2) || ft_memcmp(s, "ss", 2)
		|| ft_memcmp(s, "sb", 2) || ft_memcmp(s, "ra", 2)
		|| ft_memcmp(s, "rb", 2) || ft_memcmp(s, "rr", 2)
		|| ft_memcmp(s, "pb", 2) || ft_memcmp(s, "pa", 2)
		|| ft_memcmp(s, "rra", 3) || ft_memcmp(s, "rrb", 3)
		|| ft_memcmp(s, "rrr", 3));
}

void	apply_actions(t_node **a, t_node **b)
{
	char	*action;

	while (true)
	{
		action = get_next_line(0);
		if (!action)
			break ;
		if (!is_action(action))
		{
			put_error("Error\n");
			free(a);
			free(b);
			exit(0);
		}
		do_action(action, a, b);
	}
}
