#include <iostream>
using namespace std;
// tell complier print_summed complier exists
extern void print_summed(int array1[3][3],int array2[3][3]);

int main(){
    // initialise arrays
    int array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int array2[3][3] = {{2,2,2},{2,2,2},{2,2,2}};

    // print sum of arrays
    print_summed(array1,array2);

    return 0;
}