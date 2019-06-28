/*
** EPITECH PROJECT, 2017
** print step
** File description:
** print lists status s.b.step
*/

#include	"utils.h"
#include	"linked.h"
#include	"pushswap.h"
#include	<stdlib.h>

int		print_step(t_list **la, t_list **lb)
{
	my_putchar(NEW_LINE);
	my_putchar(NEW_LINE);
	if (get_lenght(*la) == 0) {
		my_putstr("la => EMPTY");
	} else if (get_lenght(*lb) != 0) {
		my_putstr("la => ");
		show_list(la);
	}
	my_putchar(NEW_LINE);
	if (get_lenght(*lb) == 0) {
		my_putstr("lb => EMPTY");
	} else if (get_lenght(*lb) != 0) {
		my_putstr("lb => ");
		show_list(lb);
	}
	my_putchar(NEW_LINE);
	return (SUCCESS);
}
