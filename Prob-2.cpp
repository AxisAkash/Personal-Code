#include <iostream>
#include <unordered_set>
using namespace std;

void common_elenments(int A[], int sizeA, int B[], int sizeB) {
      unordered_set<int> setA(A, A + sizeA);
    unordered_set<int> commonElements;

    for (int i = 0; i < sizeB; ++i) {
        if (setA.find(B[i]) != setA.end()) {
            commonElements.insert(B[i]);
        }
    }

    if (commonElements.empty()) {
        cout << "No common element!" << endl;
    } else {
        cout << "Common element(s): ";
        for (int element : commonElements) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    const int sizeA = 5;
    const int sizeB = 6;
    int A[sizeA] = {1, 2, 3, 4, 5};
    int B[sizeB] = {4, 5, 6, 7, 8, 9};

    common_elenments(A, sizeA, B, sizeB);

    return 0;
}

