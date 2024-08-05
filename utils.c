/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:04:56 by eneto             #+#    #+#             */
/*   Updated: 2024/08/05 13:59:03 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack_a)
{
	t_list *tmp;

	while (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
	stack_a = NULL;
}

void	free_arg(char **arg_split)
{
	int	i;

	i = 0;
	while (arg_split[i])
	{
		free(arg_split[i]);
		i++;
	}
	free(arg_split);
}

int	count_arg(char **arg_split)
{
	int	i;

	i = 0;
	while (arg_split[i])
		i++;
	return (i);
}

