/*
** EPITECH PROJECT, 2017
** rrab
** File description:
** Swap
*/

#include	"swap.h"
#include	"utils.h"
#include	<stdlib.h>
#include	<pushswap.h>

int		pab(t_list **l1, t_list **l2, int flag)
{
	t_list		*tmp = NULL;

	if (!(tmp = malloc(sizeof(t_list))))
		return (ERROR);
	if (get_lenght(*l1) < 1)
		return (ERROR);
	tmp = (*l1)->next;
	add_node((*l1)->data, l2);
	(*l1) = tmp;
	if (flag == 1)
		print_step(l1, l2);
	return (SUCCESS);
}