#include <iostream>
using namespace std;

// Function to search for an element in the array
int searchElement(int* arr, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1; // Element not found
}

// Function to delete an element from the array
int* deleteElement(int* arr, int n, int index)
{
    if (index < 0 || index >= n)
    {
        return arr; // Return the original array if index is out of bounds
    }
    int* b = new int[n-1];
    for (int i = 0; i < index; i++)
    {
        b[i] = arr[i];
    }
    for (int i = index; i < n-1; i++)
    {
        b[i] = arr[i+1];
    }
    return b;
}

// Function to add an element at the beginning of the array
int* addBeginning(int* arr, int n, int num)
{
    int* b = new int[n+1];
    b[0] = num;
    for (int i = 0; i < n; i++)
    {
        b[i+1] = arr[i];
    }
    return b;
}

// Function to print the elements of the array
void printList(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to create a new array with each element being double of the original array
int* makeDouble(int* arr, int n)
{
    int* b = new int[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = arr[i] * 2;
    }
    return b;
}

// Function to merge two arrays
int* mergeArrays(int* arr1, int n1, int* arr2, int n2)
{
    int* mergedArray = new int[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        mergedArray[n1 + i] = arr2[i];
    }
    return mergedArray;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printList(a, 5);

    int* p = addBeginning(a, 5, 100);
    printList(p, 6);

    int index = searchElement(a, 5, 30);
    cout << "Index of 30: " << index << endl;

    int* l = deleteElement(a, 5, index);
    printList(l, 4);

    int b[3] = {60, 70, 80};
    int* merged = mergeArrays(a, 5, b, 3);
    printList(merged, 8);

    delete[] p; // Free dynamically allocated memory
    delete[] l; // Free dynamically allocated memory
    delete[] merged; // Free dynamically allocated memory

    return 0;
}
