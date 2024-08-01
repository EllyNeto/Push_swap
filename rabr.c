/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:06:58 by eneto             #+#    #+#             */
/*   Updated: 2024/07/31 09:57:39 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*aux;
	t_list	*prox;

	if (!(*a) || !(*a)->next)
		return ;
	aux = *a;
	prox = (*a)->next;
	*a = prox;
	while (prox->next != NULL)
		prox = prox->next;
	prox->next = aux;
	aux->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*aux;
	t_list	*prox;

	if (!(*b) || !(*b)->next)
		return ;
	aux = *b;
	prox = (*b)->next;
	*b = prox;
	while (prox->next != NULL)
		prox = prox->next;
	prox->next = aux;
	aux->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*aux;
	t_list	*prox;

	if (!(*a) || !(*a)->next || !(*b) || !(*b)->next)
		return ;
	aux = *a;
	prox = (*a)->next;
	*a = prox;
	while (prox->next != NULL)
		prox = prox->next;
	prox->next = aux;
	aux->next = NULL;
	aux = *b;
	prox = (*b)->next;
	*b = prox;
	while (prox->next != NULL)
		prox = prox->next;
	prox->next = aux;
	aux->next = NULL;
	write(1, "rrr\n", 3);
}
