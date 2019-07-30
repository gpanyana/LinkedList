/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 02:22:14 by gpanyana          #+#    #+#             */
/*   Updated: 2019/07/29 16:36:13 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Node
{
	int			data;
	struct		Node* next;	
}basic;	

void	printList(struct Node* n)
{
	while (n != NULL)
	{
		printf(" %d, ", n->data);
		n = n->next;
	}
}

int		main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	head->data = 11;
	head->next = second;

	second->data = 13;
	second->next = third;

	third->data = 15;
	third->next = fourth;

	fourth->data = 17;
	fourth->next = NULL;

	printList(head);
}
