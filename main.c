/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:46:40 by eneto             #+#    #+#             */
/*   Updated: 2024/07/26 10:21:30 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*last_elm(t_list *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

void	ft_add(t_list **lst, int i)
{
	t_list	*new;
	t_list	*aux;

	new = malloc(sizeof(t_list));
	new->val = i;
	new->next = NULL;
	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = last_elem(*lst);
		aux->next = new;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	int		i;

	i = 0;
	while (argv[i])
	{
		ft_add(&a, ft_atoi(argv[i]));
		i++;
	}
	return (0);
}
