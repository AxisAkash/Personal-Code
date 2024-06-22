#include <iostream>
using namespace std;
int searchelement(int a,int n,int num)
{
    for(int i=0; i<n; i++)
    {
        if {arr[i]==num};
        return i;

    }
    return -1;
}
int deleteelement(int a,int n,int index)
{
    int*b=new int[n-1];
    for(int i=0;i<index;i++)
    {
        b[i]=a[i];
    }
    for(int i=index;i<n-1<i++)
    {
        b[i]=b[i+1];
    }
    return b;

}
int *addBegining(int *a,int n,int num)
{

    int*b=new int[n+1];
    b[0]=num;
    for(int i=0; i<n; i++)
    {
        a[i]=b[i+1];

    }
    return b;
}

void printlist(int *a, int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<< " ";
}
int *makeDouble(int *m,int *n)
{
    int *b= new int [n];
    for(int i=0; i<n; i++)
    {
        b[i]=m[i]*2;
    }
    return b;
}
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
    int a[5]= {10,20,30,40,50};
    printlist(a,5);
    int *p= addbeging(a,5,100);
    //int *p= makeDouble(a,5);
    //printlist (p,5);
    addBegining(a,6,100);

    int index=linearSearching(a,5,30);
    cout<<index;
    int *l=deleteitem(a,5,index;)

    printlist(p,6);
    return 0;
}
