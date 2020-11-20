/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** opp
*/
#include "./my.h"
int test(char **tab, int i, int s, int multip);

int opp(char **tab, int v)
{
    int multip = 1;
    int multip_save = 1;
    int *coord = malloc(2 * sizeof(int *));

    for (int i = 0, s = 0; i != v - 1; s++){
        if (tab[i][s] == '\n') {
            s = 0;
            i++;
        }
        while (test(tab, i, s, multip) == 1){
            multip++;
            if ((i + (multip + 1)) >= v - 1){
                multip = 1;
                break;
            }
        }
        if (test(tab, i, s, multip) == 0) {
            if (multip > multip_save){
                multip_save = multip;
                coord[0] = i;
                coord[1] = s;
            }
            multip = 1;
        }
    }
    trace(coord, multip_save, v, tab);
}