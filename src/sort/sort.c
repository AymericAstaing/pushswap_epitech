/*
** EPITECH PROJECT, 2017
** Sort algo
** File description:
** output sorting operations
*/

#include	"swap.h"
#include	"pushswap.h"
#include	"linked.h"
#include	"utils.h"
#include	"stdlib.h"
#include	"sort.h"

void		output(t_list **la,  t_list **lb, char *output)
{
	if (linked_sorted(la, lb) && (*lb) == NULL) {
		my_putstr(output);
	} else {
		my_putstr(output);
		my_putstr(SPACE);
	}
}

int		sort_list(t_list **la, t_list **lb, int flag)
{
	int		i = 0;

	for (; (*la)->next != NULL; pab(la, lb, flag), my_putstr("pb ")) {
		if (is_superior((*la)->data, (*la)->next->data) &&
			sab(la, lb, flag) == SUCCESS)
			output(la, lb, SA);
		if (linked_sorted(la, lb))
			break;
	}
	for (; i < (get_lenght(*la) + 1); i++) {
		if (pab(lb, la, flag) == SUCCESS)
			output(la, lb, PA);
	}
	if (linked_sorted(la, lb) != TRUE)
		sort_list(la, lb, flag);
	return (SUCCESS);
}