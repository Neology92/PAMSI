#include <iostream>
#include <cstdlib>
#include <ctime>

#include "mergeSort.hh"
#include "quickSort.hh"
 
using namespace std;



int main()
{
    int n;

    cout << "Podaj wielkosc: ";
    cin >> n;

    // Alocate memory for N t
    int *arr = new int[n];
    
    FillArray(arr, n);

        mSortDesc(arr, 0, n-1);
        mSort(arr, 0, n-1);
        // qSort(arr, 0, n-1);
        check(arr, n);
        
    delete [] arr;
}