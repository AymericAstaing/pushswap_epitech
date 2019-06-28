/*
** EPITECH PROJECT, 2018
** Pushswap
** File description:
** Utils header
*/

#ifndef UTILS_H_
	#define UTILS_H_

#define			SORTED		1
#define			INT			1
#define			NEW_LINE	'\n'
#define			FLAG		"-v"
#define			SPACE		" "
#define			END			'\0'
#define			QUOTE		','
#define			LESS		'-'

#include	"linked.h"

/*	String manipulation	*/
void		my_putchar(char);
void		my_putstr(char const *);
int			check_sorted(char **);
int			my_strcmp(const char *, const char *);
int			create_linked(t_list **);
int			init_linkedlist(char **, t_list **);
int			show_list(t_list **);
int			add_node(char *, t_list **);
int			my_length(t_list *p);
void		reverse_list(t_list **);
int			get_lenght(t_list *p);
int			print_step(t_list **, t_list **);
int			check_flag(char **argv);

/*	Int manipulation	*/
int			my_getnbr(const char *str);

#endif /* !UTILS_H_ */