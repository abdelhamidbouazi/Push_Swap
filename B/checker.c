/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:18:50 by abouazi           #+#    #+#             */
/*   Updated: 2022/06/05 22:06:31 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "get_next_line.h"

int	main(int ac, const char **argv)
{
	t_node	*a;
	t_node	*b;
	char	*str;

	if (ac < 2)
		return (0);
	str = args_to_string(argv);
	fill_stack(&a, str);
	apply_actions(&a, &b);
	if (sorted(a) && !b)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free_all(&a);
	free_all(&b);
}
