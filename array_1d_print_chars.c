/*
** EPITECH PROJECT, 2020
** jej
** File description:
** array_1d_print_chars
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write (1, &str[i], 1);
    return (0);
}

int my_strlen(char *str){
    int i = 0;
    
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

void  array_1d_print_chars(char  const *arr)
{
    for (int i = 0; arr[i] != '\0'; i++){
        write(1,&arr[i],1);
        my_putstr("\n");
    }
}