#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int A[size] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int target;

    cout << "Enter an integer: ";
    cin >> target;


    int count = 0; //we start from 0

    for (int i = 0; i < size; ++i) {
        if (A[i] == target) {
            count++;       //just for count how many times
        }
    }

    cout << "The integer " << target << " occurs " << count << " time(s) in array A." << std::endl;

    return 0;
}

