#include <iostream>
using namespace std;
// returns scaled array
void print_scaled(int array[3][3],int scale){
    // print scaled array
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << scale*array[i][j] << " ";
        }
        cout << endl;
    }
}