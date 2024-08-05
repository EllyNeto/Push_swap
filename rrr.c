/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:51:42 by eneto             #+#    #+#             */
/*   Updated: 2024/08/01 10:34:56 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*aux;

	if (!(*a) || !(*a)->next)
		return ;
	aux = *a;
	last = (*a)->next;
	while (last->next != NULL)
	{
		aux = last;
		last = last->next;
	}
	aux->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*aux;
	t_list	*last;

	aux = *b;
	last = (*b)->next;
	if (!(*b) || !(*b)->next)
		return ;
	while (last->next != NULL)
	{
		aux = last;
		last = last->next;
	}
	aux->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*aux;
	t_list	*last;

	aux = *a;
	last = (*a)->next;
	aux = *b;
	last = (*b)->next;
	if (!(*a) || !(*a)->next || !(*b) || !(*b)->next)
		return ;
	while (last->next != NULL)
	{
		aux = last;
		last = last->next;
	}
	aux->next = NULL;
	last->next = *a;
	*a = last;
	aux->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrr\n", 4);
}
