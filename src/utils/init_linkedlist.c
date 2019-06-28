/*
** EPITECH PROJECT, 2018
** Init
** File description:
** initialisation of linked list
*/

#include	"utils.h"
#include	"linked.h"
#include	"pushswap.h"
#include	"swap.h"
#include	<stdlib.h>
#include	<stdio.h>

int		check_int(char *str)
{
	for (int i = 0; str[i] != END; i++) {
		if (str[i] != 45 && (str[i] < 48 || str[i] > 58))
			return (ERROR);
	}
	return (SUCCESS);
}

int		add_node(char *data, t_list **list)
 {

	t_list		*li = NULL;
	
	if (check_int(data) != INT)
		return (ERROR);
	if (!(li = malloc(sizeof(t_list))))
		return (ERROR);
	li->data = data;
	li->next = (*list);
	(*list) = li;
	return (SUCCESS);
}

int		create_linked(t_list **l)
{
	if (!(l))
		return (ERROR);
	(*l)->data = 0;
	(*l)->next = NULL;
	return (SUCCESS);
}

int		init_linkedlist(char **argv, t_list **la)
{
	int		i = 1;

	for (; argv[i] != NULL; add_node(argv[i], la), i++);
	reverse_list(la);
	return (SUCCESS);
}