/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 08:12:46 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:39:08 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;
	char	*str;

	if (argc == 1)
		exit(1);
	str = args_to_string(argv);
	fill_stack(&a, str);
	if (sorted(a) == 1)
		exit (0);
	size = get_size(a);
	if (size <= 3)
		sort_three(&a);
	if (size > 3 && size <= 5)
		sort_five(&a, &b);
	if (size > 5)
		sort_using_radix(&a, &b);
	return (0);
}
