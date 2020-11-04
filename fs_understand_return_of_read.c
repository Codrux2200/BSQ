/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** fs_understand_return_of_read
*/
#include<fcntl.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write (1, &str[i], 1);
    return (0);
}

void  fs_understand_return_of_read(int fd , char *buffer, int  size)
{
    int reads = read(fd, buffer, sizeof(buffer));

    if (reads == -1){
        my_putstr ("read failed\n");
    } else if (reads == 0) {
        my_putstr ("read has nothing more to read\n");
    } else if (reads < size) {
        my_putstr ("read didn’t complete the entire buffer\n");
    } else if (reads > size){
        my_putstr ("read completed the entire buffer\n");
    }
}
