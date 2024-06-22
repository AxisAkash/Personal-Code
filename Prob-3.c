#include <iostream>
#include<unordered_set>
using namespace std;

void removeDuplicates(int arr[], int& size) {
    unordered_set<int> uniqueElements;

    for (int i = 0; i < size; ++i) {
        uniqueElements.insert(arr[i]);
    }

    size = 0;

    for (int element : uniqueElements) {
        arr[size++] = element;
    }
}

int main() {
    const int maxSize = 10;
    int arr[maxSize] = {1, 2, 3, 3, 4, 5, 6, 6, 7, 8};
    int size = 10;


    bool hasDuplicates = false;
    unordered_set<int> seenElements;
    for (int i = 0; i < size; ++i) {
        if (seenElements.find(arr[i]) != seenElements.end()) {
            hasDuplicates = true;
            break;
        }
        seenElements.insert(arr[i]);
    }

    if (hasDuplicates) {
        removeDuplicates(arr, size);
        cout << "Modified array after removing duplicates: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Array already unique!" << endl;
    }

    return 0;
}

