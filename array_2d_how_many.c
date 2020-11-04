/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** array_2d_how_many
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write (1, &str[i], 1);
    return (0);
}

int my_put_nbr(int nbr)
{
    int i = 0;
    int result = 1;
    int save = 0;
    int count = 0;

    for (int c = nbr; c > 0; c = c/10, i++, save++);
    for (; i != 1; i--)
        result = result * 10;
    for (char a; nbr > 0; a++) {
        int chiffre = nbr / result;
        a = chiffre + 48;
        write (1, &a, 1);
        nbr = nbr % result;
        result = result / 10;
        count++;
    }
    for (; count != save; count++)
        write (1, "0", 1);
}


int  array_2d_how_many(int **arr , int  nb_rows , int  nb_cols , int  number)
{
    int calc = 0;

    for (int i = 0; i < nb_cols ; i++){
        for (int v = 0; v < nb_rows ; v++){
            if (arr[i][v] == number)    
                calc++;
        }
    }
    if (calc == 0){
        my_putstr("0");
        my_putstr("\n");
    } else if (calc < 0){
        my_putstr("-");
        my_put_nbr(calc * -1);
        my_putstr("\n");
    } else {
        my_put_nbr(calc);
        my_putstr("\n");
    }
}