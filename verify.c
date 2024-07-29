/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:43:57 by eneto             #+#    #+#             */
/*   Updated: 2024/07/24 13:23:10 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	verify(char *num)
{
	t_list	*aux;
	int		tmp;
	int		tmp2;

	if (aux->val > 0)
	{
		tmp = aux->val;
		aux = aux->next;
	}
	else if (aux->negative < 0)
	{
		tmp2 = aux->negative;
		aux = aux->next;
	}
}/*/

bool	duplicate(t_list **stack, int counter)
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
	t_list	*curr;
	t_list	*top;

	top = *stack;
	while (top)
	{
		curr = top->next;
		while (curr)
		{
			if (top->val < curr->val)
				return (true);
			curr = curr->next;
		}
		top = top->next;
	}
	return (false);
}
