/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:26:47 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/16 22:18:31 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

#include <stdio.h>
#include <stdlib.h>


typedef struct s_lst
{
	struct s_lst *next;
	struct s_lst *prev;
	int i;
	char *s;
}				t_lst;

t_lst *add(t_lst *liste, char *s, int index);
void	printlist(t_lst *lst);
void	insert(t_lst *liste, char *s , int index);
void	print(t_lst *liste);
int		find(t_lst *liste,int i);
void	del(t_lst *liste);
#endif
