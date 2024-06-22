#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 3, 4, 5, 1, 2, 3, 4};
    int frequency[size] = {0};


    for (int i = 0; i < size; ++i) {
        frequency[arr[i] - 1]++;
    }


    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << " occurs " << frequency[i] << " time(s)" << endl;
    }

    return 0;
}

