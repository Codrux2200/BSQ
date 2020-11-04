/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** sa_va_etre_chaud
*/
#include<fcntl.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write (1, &str[i], 1);
    return (0);
}

int  fs_open_file(char  const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1){
        my_putstr ("FAILURE\n");
        return(fd);
    } else {
        my_putstr ("SUCESS\n");
        return(fd);
    }
}
