#include <iostream>
// returns 1 or 0 if array is identity or not
int is_identity(int array[10][10]){
    // initialise isIdentity 
    int isIdentity = 1;

    // loop to check elements
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
        if (i == j && array[i][j] != 1){
                isIdentity = 0;
            }else if (i != j && array[i][j] != 0){
                isIdentity = 0;
            }
        }
    }

    // return isIdentity
    return isIdentity;
}