/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:18:59 by eneto             #+#    #+#             */
/*   Updated: 2024/07/26 10:16:10 by eneto            ###   ########.fr       */
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

void	sb(t_list *b)
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
