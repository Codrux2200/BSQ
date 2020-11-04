/*
** EPITECH PROJECT, 2020
** bsq_step_3
** File description:
** fs_cat_500_bytes
*/
#include<fcntl.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write (1, &str[i], 1);
    return (0);
}

void  fs_cat_500_bytes(char  const *filepath)
{
    char buffer[1000] = " ";
    int fd = open(filepath, O_RDONLY);
    int reads = read(fd, buffer, 500);
    my_putstr(buffer);

}
