/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <stddef.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int my_getnbr(char *str);
int  bsq(char  const *filepath, int size);
void tabs_creator(char *buffer, int size);
void find_rec(char **tab);
int my_putstr(char const *str);
int opp(char **tab, int v);
#endif /* !MY_H_ */
