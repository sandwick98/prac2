#include <iostream>
using namespace std;
// tell complier sum_if_palindrome complier exists
extern int sum_if_palindrome(int integers[], int length);

int main(){
    // initialise integers
    int integers[6] = {0,1,2,2,1,0};

    // find sum of integers if integers is palindrome
    cout << sum_if_palindrome(integers,6) << endl;

    return 0;
}