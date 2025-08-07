#include <iostream>
// tell compiler count_digits compiler exists
extern void count_digits(int array[4][4]);

int main(){
    // initialise array
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{5,6,7,8},{1,2,3,9}};

    // count digits in array
    count_digits(array);

    return 0;
}