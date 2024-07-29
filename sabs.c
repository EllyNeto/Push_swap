/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:18:59 by eneto             #+#    #+#             */
/*   Updated: 2024/07/29 10:49:58 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*prim;
	t_list	*sec;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	prim = *a;
	sec = (*a)->next;
	prim->next = sec->next;
	sec->next = prim;
	*a = sec;
	write(1, "sa\n", 1);
}

void	sb(t_list **b)
{
	t_list	*prim;
	t_list	*sec;

	if (*b == NULL || (*b)-> == NULL)
		return ;
	prim = *b;
	sec = (*b)->next;
	prim->next = sec->next;
	sec->next = prim;
	*b = sec;
	write(1, "sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	t_list	*prim;
	t_list	*sec;

	if (*a == NULL || *a->next == NULL)
		return ;
	prim = *a;
	sec = (*a)->next;
	prim->netx = sec->next;
	sec->net = prim->next;
	if (*b == NULL || *b->next == NULL)
		return ;
	prim = *b;
	sec = (*b)->next;
	prim->next = sec->next;
	sec->next = prim->next;
}
