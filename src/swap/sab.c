/*
** EPITECH PROJECT, 2017
** sab
** File description:
** swap first two nbrs
*/

#include	"swap.h"
#include	"linked.h"
#include	<stdlib.h>
#include	"utils.h"
#include	"pushswap.h"
#include	<stdio.h>
#include	"sort.h"

int	sab(t_list **li, t_list **li_b, int flag)
{
	t_list		*tmp = NULL;

	if (get_lenght(*li) < 2 || (*li) == NULL)
		return (ERROR);
	tmp = (*li)->data;
	(*li)->data = (*li)->next->data;
	(*li)->next->data = tmp;
	if (flag == 1)
		print_step(li, li_b);
	return (SUCCESS);
}