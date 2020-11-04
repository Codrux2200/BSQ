/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** array_2d_how_many
*/

int main(){
    int **arr = malloc(2 * sizeof(int *));
    int *arr1 = malloc(2 * sizeof(int));
    int *arr2 = malloc(2 * sizeof(int));
    arr1[0] = 56;
    arr1[1] = 6;
    arr2[0] = 45;
    arr2[1] = 9;
    arr[0] = arr1;
    arr[1] = arr2;
    array_2d_sum(arr, 2 , 2);
}

int  array_2d_how_many(int **arr , int  nb_rows , int  nb_cols , int  number){
    int calc = 0;

    for (int i = 0; i < nb_cols ; i++){
        for (int v = 0; v < nb_rows ; v++){
            if (arr[i][v] == number)    
                calc++;
        }
    }
    if (count == 0){
        my_putstr("0");
        my_putstr("\n");
    } else if (count < 0){
        my_putstr("-");
        my_put_nbr(count * -1);
        my_putstr("\n");
    } else {
        my_put_nbr(count);
        my_putstr("\n");
    }
}