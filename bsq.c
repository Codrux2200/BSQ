/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** bsq
*/
#include "./include/my.h"

int main(int ac , char **av)
{
    bsq(av[1], 0);
    return (0);
}

int bsq(char  const *filepath, int size)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;

    buffer = malloc( 214748 * sizeof(char *));
    size = read(fd, buffer, 214748);
    close(fd);
    if (fd == -1) {
        write(2,"ERROR LOADING MAP\n", 19);
        return(84);
    } else {
        if (size < 1){
            write(2,"ERROR MAP EMPTY\n", 17);
            return(84);
        } else {
            buffer[size] = '\n';
            tabs_creator(buffer, size, filepath, 0);
        }
    }
}

void tabs_creator(char *buffer, int size, const char *filepath, int v)
{
    char **tab = malloc(size * sizeof(char *));
    char *ligne = malloc(size * sizeof(char *));

    if (chiffre(filepath) <= 5)
        size++;
    for (int i = 0, s = 0; i != size; i++) {
        if (buffer[i] == '\n'){
            ligne[s] = buffer[i];
            tab[v] = ligne;
            v++;
            ligne = malloc(size * sizeof(char *));
            s = 0;
        } else {
            ligne[s] = buffer[i];
            s++;
        }
    }
    int *coord;
    opp(tab, v, 1, coord);
}

int test(char **tab, int i, int s, int multip)
{
    int save_s = s;
    int save_i = i;

    for(; i != save_i + multip; i++) {
        s = save_s;
        for (; s != save_s + multip; s++) {
            if (tab[i][s] != '.') {
                return (0);
            }
        }
    }
    return (1);
}

void trace(int *coord, int multip_save, int v, char **tab)
{
    int save_s;

    for (int i = 1, s = 0; i != v; s++) {
        if ((i >= coord[0] && i < coord[0] + multip_save - 1)
        && (s >= coord[1] && s < coord[1] + multip_save - 1)) {
                write(1, "x", 1);
        } else if (tab[i][s] == '\n') {
            s = -1;
            i++;
            write(1, "\n", 1);
        } else {
            write(1, &tab[i][s], 1);
        }
    }
}
