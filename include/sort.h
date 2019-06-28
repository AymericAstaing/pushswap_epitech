/*
** EPITECH PROJECT, 2018
** Pushswap
** File description:
** Sort header
*/

#ifndef SORT_H_
	#define SORT_H_

#include	"linked.h"

/*	Sort linked list	*/
int		linked_sorted(t_list **, t_list **);
int		sort_list(t_list **, t_list **, int i);
void	output(t_list **la,  t_list **lb, char*);
int		is_superior(void *, void *);

#endif
