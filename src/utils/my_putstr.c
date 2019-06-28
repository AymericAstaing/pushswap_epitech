/*
** EPITECH PROJECT, 2017
** putstr
** File description:
** Display string
*/

#include		"utils.h"

void		my_putstr(char const *str)
{
	int	i = 0;

	while (str[i] != END) {
		my_putchar(str[i]);
		i++;
	}
}
