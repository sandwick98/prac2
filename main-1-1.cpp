#include <iostream>
using namespace std;
// tell complier sum_diagonal complier exists
extern int sum_diagonal(int array[4][4]);

int main(){
    // initialise array
    int array[4][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    // display sum of diagonals top left to bottom right
    cout << "The sum of diagonals top left to bottom right is: " << sum_diagonal(array) << endl;

    return 0;
}