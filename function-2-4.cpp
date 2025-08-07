#include <iostream>
// return min of array
int array_min(int integers[], int length){
    // return -1 if length is 0 or negative
    if (length <= 0){
        return -1;
    }
    // initialise min as first element
    int min = integers[0];

    // loop to find other existing min
    for (int i = 1; i < length; i++){
        if (integers[i] < min){
            min = integers[i];
        }
    }

    // return min
    return min;
}

// return max of array
int array_max(int integers[], int length){
    // return -1 if length is 0 or negative
    if (length <= 0){
        return -1;
    }

    // initialise max as first element
    int max = integers[0];

    // loop to find other existing max
    for (int i = 1; i < length; i++){
        if (integers[i] > max){
            max = integers[i];
        }
    }

    // return max
    return max;
}

// tell compiler array_min and array_max compilers exist
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

// return sum of min and max
int sum_min_max(int integers[],int length){
    // return -1 if length is 0 or negative
    if (length <= 0){
        return -1;
    }

    // calculate sum
    int sum = array_min(integers, length) + array_max(integers,length);

    // return sum
    return sum;
}

