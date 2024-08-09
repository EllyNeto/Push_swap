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

int	ft_atoi_arg(const char *str, t_list **a, char **arg_split)
{
	int		i;
	long	neg_flag;
	long	result;

	i = 0;
	result = 0;
	neg_flag = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg_flag = -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	if (str[i] != 0 || !ft_isdigit(str[i - 1])
		|| (result > 2148364847 || result < -2148364848))
		message_error(a, arg_split);
	return ((int)(result * neg_flag));
}

void	free_stack(t_list **stack_a)
{
	t_list	*tmp;

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

int	count_l(t_list *arg)
{
	t_list	*aux;
	int	i;
	
	i = 0;
	aux = arg;
	while(aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
