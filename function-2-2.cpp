#include <iostream>
#include <cmath>
// returns integer value of binary number
int binary_to_int(int binary_digits[], int number_to_digit){
    // initialise integer value
    int integer = 0;

    // calculate integer value
    for (int i = 0; i < number_to_digit; i++){
        integer += pow(2,number_to_digit-i-1) * binary_digits[i];
    }

    // return integer
    return integer;
}