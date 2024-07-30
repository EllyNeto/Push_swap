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

void ft_print_stacks(t_list *a, t_list *b)
{
	t_list *tmp_a;
	t_list *tmp_b;
	
	tmp_a = a;
	tmp_b = b;
	while (tmp_a || tmp_b)
	{
		if (tmp_a != NULL)
			printf("| %d |", tmp_a->val);
		if (tmp_b != NULL)
			printf("| %d |\n", tmp_b->val);
		else
			printf("\n");
		if (tmp_a)
			printf("  ↓");
		if (tmp_b)
			printf("    ↓\n");
		else
			printf("\n");
		if (tmp_a != NULL)
			tmp_a = tmp_a->next;
		if (tmp_b != NULL)
			tmp_b = tmp_b->next;
	}
	printf(" NULL  NULL\n");
}

void	ft_add(t_list **lst, int i)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->val = i;
	new->next = *lst;
	*lst = new;
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;
	
	a = NULL;
	b = NULL;
	i = argc;
	while (--i > 0)
		ft_add(&a, ft_atoi(argv[i]));
	ft_print_stacks(a, b);
	sa(&a);
	ft_print_stacks(a, b);
	return (0);
}
