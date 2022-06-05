/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:11:15 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 21:13:54 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_node **a)
{
	int	max;

	max = get_m(*a);
	if (max == (*a)->data)
		rotate(*a, "ra");
	else if (max == (*a)->next->data)
		r_rotate(*a, "rra");
	if ((*a)->data > (*a)->next->data)
		swap(*a, "sa");
}

void	sort_five(t_node **a, t_node **b)
{
	int	index;
	int	min;

	while (get_size(*a) > 3)
	{
		min = get_min(*a);
		index = get_index(*a, min);
		if (index > get_size(*a) / 2 && index <= get_size(*a))
		{
			r_rotate(*a, "rra");
			index++;
		}
		if (index <= get_size(*a) / 2 && index > 1)
		{
			rotate(*a, "ra");
			index--;
		}
		if (min == (*a)->data)
			push(a, b, "pb");
	}
	sort_three(a);
	push(b, a, "pa");
	push(b, a, "pa");
}
