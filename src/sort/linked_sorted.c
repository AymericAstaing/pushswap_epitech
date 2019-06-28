/*
** EPITECH PROJECT, 2018
** check linked sorted
** File description:
** check if linked is sorted
*/

#include	"utils.h"
#include	"pushswap.h"
#include	<stdlib.h>
#include	<stdio.h>

int		linked_sorted(t_list **list)
{
	t_list		*tmp = (*list);
	void		*cur_data= tmp->data;

	while (tmp->next != NULL) {
		if (my_getnbr(cur_data) > my_getnbr(tmp->next->data))
			return (ERROR);
	tmp = tmp->next;
	cur_data = tmp->data;
	}
	return (SUCCESS);
}