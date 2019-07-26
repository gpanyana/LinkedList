/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicplusList.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 03:08:55 by gpanyana          #+#    #+#             */
/*   Updated: 2019/07/26 04:50:41 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Node
{
	int			data;
	struct 		Node* next;
}basicplus;

void	printList(struct Node* n)
{
	while (n != NULL)
	{
		printf(" %d ", n->data);
		n = n->next;
	}
}

/*
void	s_plus1(int plus)
{
	struct Node* head;
	plus = (head->data + 1);
}
*/

int		main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
//	struct Node* third = NULL;
//	struct Node* fourth = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
//	third = (struct Node*)malloc(sizeof(struct Node));
//	fourth = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;

	second->data = (head->data * 3);
	second->next = NULL;

	printList(head);
}
