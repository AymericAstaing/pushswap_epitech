/*
** EPITECH PROJECT, 2018
** show list
** File description:
** display linked list
*/

#include	"utils.h"
#include	<stdlib.h>
#include	"pushswap.h"

int		show_list(t_list **list)
{
	struct s_list		*temp = *list;

	if ((*list) == NULL)
		return (ERROR);
	while (temp != NULL) {
		my_putstr(temp->data);
	if (temp->next != NULL)
		my_putstr(SPACE);
	temp = temp->next;
	}
	return (SUCCESS);
}