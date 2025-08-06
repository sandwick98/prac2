#include <iostream>
// returns sum of diagonals in array
int sum_diagonal(int array[4][4]){
    // initialise sum
    int sum = 0;

    // loop to sum diagonal elements
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i == j){
                sum += array[i][j];
            }
        }
    }

    // return sum
    return sum;
}