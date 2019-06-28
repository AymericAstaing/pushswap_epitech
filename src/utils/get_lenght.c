/*
** EPITECH PROJECT, 2017
** utils, get_lenght 
** File description:
** get linked list size
*/

#include	"swap.h"
#include	"pushswap.h"
#include	<stdlib.h>

int		get_lenght(t_list *p)
{
	t_list		*cur = p;
	int		size = 0;

	for (; cur != NULL; size++, cur = cur->next);
	return (size);
}