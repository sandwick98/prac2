#include <iostream>
using namespace std;
// tell complier print_scaled compiler exists
extern int print_scaled(int array[3][3],int scale);

int main(){
    // initialise scale
    int scale = 3;
    // initialise array
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // print scaled array
    print_scaled(array, scale);

    return 0;
}