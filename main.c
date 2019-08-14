/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:34:42 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/12 13:55:23 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdlib.h>

typedef struct	nodules
{
	int				stack_a;
	int				stack_b;
	struct nodules	*next;
}					t_node;

t_node		*template_list(int n)
{
	int		i;
	node	*head;
	node	*body;
	node	*tail;

	i = 0;
	head = NULL;
	body = NULL;
	tail = NULL;
	while (i < n)
	{
		body = (node *)malloc(sizeof(node));
		body->stack_a = i;
		body->stack_b = 'x';
		body->next = NULL;
		if (head == NULL)
			head = body;
		else
		{
			tail = head;
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = body;
		}
		i++;
	}
	return (head);
}

void	printout(node *head)
{
	node	*g;

	g = head;
	while (g != NULL)
	{
		ft_putnbr(g->stack_a);
		ft_putstr("\t\t");
		(g->stack_b == 'x') ? ft_putstr(" ") : ft_putnbr(g->stack_b);
		ft_putchar('\n');
		g = g->next;
	}
	ft_putstr("_\t\t_\n");
	ft_putstr("a\t\tb\n");
}

int		main(void)
{
	int		i;
	node	*head;

	i = 5;
	head = NULL;
	head = template_list(i);
	printout(head);
	return (0);
}
