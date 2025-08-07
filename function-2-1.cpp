#include <iostream>
using namespace std;
// returns base 10 number as base 2
void print_binary_str(string decimal_number){
    // convert input string to integer
    int n =stoi(decimal_number);
    // initialise remainder array
    int remainder[10];
    // initialise count
    int count = 0;

    // loop until quotient equals 1
    while (n >= 1){
        remainder[count++] = n % 2;
        n = n / 2;
    }

    // print binary number
    for (int i = 0; i < count; i++){
        cout << remainder[count-i-1];
    }
    cout << endl;

}