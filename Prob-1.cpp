#include <iostream>
using namespace std;


void mergemyarray(int arr_1[], int size_1, int arr_2[], int size_2)

    {

    int newSize = size_1 + size_2;         //Attach two arrays together in new size
    int mergedArray[newSize];

    for (int i = 0; i < size_1; ++i) {     //Merged the arr_1
        mergedArray[i] = arr_1[i];
    }

    for (int i = 0; i < size_2; ++i) {    //Merged the arr_2
        mergedArray[size_1 + i] = arr_2[i];
    }

    for (int i = newSize - 1; i >= 0; --i) {   //merged the newsize together arr_1 + arr_2
        cout << mergedArray[i] << " ";
    }
    cout<<endl;

    }



int main() {
    const int size_1 = 4;
    const int size_2 = 3;
    int arr_1[size_1] = {1, 2, 3, 4};
    int arr_2[size_2] = {5, 6, 7};

   mergemyarray (arr_1, size_1, arr_2, size_2);  //just call the function

    return 0;
}

