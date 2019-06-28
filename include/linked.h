/*
** EPITECH PROJECT, 2018
** Linked
** File description:
** Linked header
*/

#ifndef LINKED_H_
	#define LINKED_H_

typedef	struct	s_list		t_list;
typedef	struct	List_a		list_a;
typedef	struct	List_b		list_b;

struct s_list	
{
	void * data;
	t_list *next;
};
#endif
