#include <iostream>
using namespace std;
// tell complier print_binary_str complier exists
extern void print_binary_str(string decimal_number);

int main(){
    // initialise decimal number
    string s1 = "7";

    // print binary number
    print_binary_str(s1);

    return 0;
}