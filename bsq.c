/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** bsq
*/
#include <stddef.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int my_getnbr(char *str);
int  bsq(char  const *filepath, int size);
void tabs_creator(char *buffer, int size);
void find_rec(char **tab);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write (1, &str[i], 1);
    return (0);
}

int main(int ac , char **av)
{
    bsq(av[1], 0);
}

int  bsq(char  const *filepath, int size)
{
    int fd = open(filepath, O_RDONLY);
    char buffer1[5] = "";
    char *buffer;
    int buffsize;

    size = read(fd, buffer1, 5);
    close(fd); 
    buffsize = my_getnbr(buffer1);
    fd = open(filepath, O_RDONLY);
    buffer = malloc(((buffsize * buffsize) + 1) * sizeof(char *)); 
    size = read(fd, buffer, (buffsize * buffsize));
    close(fd); 
    if (fd == -1) {
        return(84);
    } else {
        buffer[size] = '\n';
        tabs_creator(buffer, size);
    }
}

void tabs_creator(char *buffer, int size)
{
    char **tab = malloc(size * sizeof(char *));
    char *ligne = malloc(size * sizeof(char *));
    int v = 0;

    for (int i = 0, s = 0, v = 0; i != size; i++) {
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
    opp(tab, v);
}


int opp(char **tab, int v)
{
    int oppst = 0;
    int multip = 1;
    int s = 1;
    int n = 0;
    int s_save = 1;
    int n_save = 0;
    int test = 0;

    for (int i  = 0; i <= v; i++) {
        for (s = s_save; s <= s_save + (multip + 1) ; s++) {
            for (n = n_save; n <= n_save + multip; n++) {
                if (s < 137){
                    if(tab[s][n] == 'o') {
                        multip = 1;
                        oppst = 1;
                        if (tab[s][n] != '\n')
                            n_save ++;
                        else
                            s_save ++;
                    }
                }
            }
        } 
        if (oppst == 0) {
            printf("valeur %d, at x = %d , y = %d \n", multip, s, n);
            multip ++;
            test++;
        } else {
            oppst = 0;
        }
    }     
}