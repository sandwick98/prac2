#include <iostream>
using namespace std;
// tell complier binary_to_int complier exists
extern int binary_to_int(int binary_digits[], int number_to_digit);

int main(){
    // initialise binary_digits
    int binary_digits[3] = {1,1,1};

    // display integer value
    cout << "The integer value is: " << binary_to_int(binary_digits,3) << endl;

    return 0;
}