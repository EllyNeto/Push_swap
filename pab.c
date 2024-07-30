/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:05:04 by eneto             #+#    #+#             */
/*   Updated: 2024/07/29 11:07:15 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *a, t_list *b)
{
	t_list prim;

	if (b == NULL)
		return;
	else
	{
		prim = b;
		b = b->next;
		prim->next = a;
		a = prim; 
	}
}

void	pb(t_list *a, t_list *b)
{
	t_list prim;
	
	if (a == NULL)
		return;
	else
	{
		prim = a;
		a = a->next;
		prim->next = b;
		b = prim;	
	}
}
