#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n, int& comparisons, int& exchanges)
{
    for (int i = 0; i < n - 1; ++i)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            comparisons++;
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                exchanges++;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = {92, 82, 21, 16, 18, 95};
    int n = sizeof(arr) / sizeof(arr[0]);

    int comparisons = 0;
    int exchanges = 0;

    bubbleSort(arr, n, comparisons, exchanges);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Number of comparisons = " << comparisons << endl;
    cout << "Number of exchanges = " << exchanges << endl;

    return 0;
}


