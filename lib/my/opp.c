/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** opp
*/
#include "./my.h"
int test(char **tab, int i, int s, int multip);

int *return_tab(int* coord, int i, int s)
{
    coord[0] = i;
    coord[1] = s;
    return (coord);
}

void opp(char **tab, int v, int multip_save, int *coord)
{
    coord = malloc(2 * sizeof(int *));
    for (int i = 0, s = 0, multip = 1; i != v - 1; s++) {
        if (tab[i][s] == '\n') {
            s = 0;
            i++;
        }
        for (; test(tab, i, s, multip) == 1; multip++){
            if ((i + (multip + 1)) >= v - 1 && v > 6){
                multip = 1;
                break;
            }
        }
        if (test(tab, i, s, multip) == 0) {
            if (multip > multip_save) {
                multip_save = multip;
                coord = return_tab(coord, i, s);
            }
            multip = 1;
        }
    }
    trace(coord, multip_save, v, tab);
}

int chiffre(char const*filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[5];
    int size = 0;
    int result = 0;

    size = read(fd, buffer, 5);
    result = my_getnbr(buffer);
    close(fd);
    return (result);
}