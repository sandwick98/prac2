#include <iostream>
// returns sum of elements if array is palindrome
bool is_palindrome(int integers[], int length){
    // return false if length less than or equal to 0
    if (length <= 0){
        return 1;
    }
    // check if length is even
    for (int i = 0; i < length/2; i++){
        if (integers[i] != integers[length-i-1]){
            return 0;
        }
    }
    return 1;
}

int sum_array_elements(int integers[], int length){
    // return -1 if length less than or equal to 0
    if (length <= 0){
        return -1;
    }
    // initialise sum 
    int sum = 0;

    // calculate sum
    for (int i = 0; i < length; i++){
        sum += integers[i];
    }

    // return sum
    return sum;
}

// tell complier is_palindrome and sum_array_elements compliers exist
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length){
    // return -1 if length less than or equal to 0
    if (length <= 0){
        return -1;
    }
    // initialise sum
    int sum;

    // if integers palindrome find sum
    if (is_palindrome(integers, length) == 1){
        sum = sum_array_elements(integers, length);
    } else{
        // return -2 if not palindrome
        return -2;
    }

    // return sum
    return sum;
}