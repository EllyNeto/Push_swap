/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_nb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:20:12 by eneto             #+#    #+#             */
/*   Updated: 2024/08/06 13:30:05 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	avalue_nb(t_list **a, t_list **b)
{
	int	i;

	i = count_l(*a);
	if (i == 2)
		sort_two(a);
	ft_print_stacks(a, b);
}

int	sort_two(t_list **a)
{
	if (!*a || !(*a)->next)
		return (0);
	sa(a);
	return (1);
}

/*int	sort_three(t_list **a)
{
	t_list	*aux;
	
	aux = *a;
	
}*/
