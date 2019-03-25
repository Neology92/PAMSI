#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "mergeSort.hh"
#include "quickSort.hh"
 
using namespace std;



int main()
{
    int n;

    cout << "Podaj wielkosc: ";
    cin >> n;

    // Alocate memory for N t
    std::vector<int> arr;

    FillArray(arr, n);
    
    //[DEBUG]
    wypisz(arr);


        mSortDesc(arr, 0, n-1);
    
    //[DEBUG]
    wypisz(arr);
        checkDesc(arr);

        mSort(arr, 0, n-1);
    
    //[DEBUG]
    wypisz(arr);

        // qSort(arr, 0, n-1);
        checkAsc(arr);
        
}