#include <iostream>
using namespace std;
// tell compiler sum_min_max compiler exists
extern int sum_min_max(int integers[],int length);

int main(){
    // initialise integers
    int integers[5] = {1,2,5,3,4};

    // display sum of min and max
    cout << "The sum of the min and max is: " << sum_min_max(integers,5) << endl;

    return 0;
}