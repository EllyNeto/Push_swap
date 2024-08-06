/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:43:57 by eneto             #+#    #+#             */
/*   Updated: 2024/08/05 14:56:29 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	duplicate(t_list **stack)
{
	t_list	*curr;
	t_list	*top;

	top = *stack;
	while (top)
	{
		curr = top->next;
		while (curr)
		{
			if (top->val == curr->val)
				return (true);
			curr = curr->next;
		}
		top = top->next;
	}
	return (false);
}

bool	is_not_sorted(t_list **stack)
{
	t_list	*top;

	top = *stack;
	while (top->next)
	{
		if (top->val > top->next->val)
			return (true);
		top = top->next;
	}
	return (false);
}

void	message_error(t_list **a, char **arg_split)
{
	if (*a)
		free_stack(a);
	if (*arg_split)
		free_arg(arg_split);
	write(2, "Error\n", 6);
	exit(1);
}
