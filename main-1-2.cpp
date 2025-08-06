#include <iostream>
using namespace std;
// tell complier is_identity complier exists
extern int is_identity(int array[10][10]);

int main(){
    // initialise array
    int array[10][10] = {
        {1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1}
    };

    // display if array is or is not identity matrix
    if (is_identity(array) == 1){
        cout << "This array is an identity matrix." << endl;
    } else if (is_identity(array) == 0){
        cout << "This array is not an identity matrix." << endl;
    }
    
    return 0;
}