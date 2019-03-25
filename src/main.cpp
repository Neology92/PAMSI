#include "mergeSort.hh"
#include "quickSort.hh"
#include "heapSort.hh"


int main()
{
    int n;

    std::cout << "Podaj wielkosc: ";
    std::cin >> n;

    // Alocate memory for N t
    std::vector<int> arr;

    FillArray(arr, n);
//[DEBUG]
// wypisz(arr, 0, arr.size()-1);


        // mSortDesc(arr, 0, n-1);
        // qSortDesc(arr, 0, n-1);
        hSortDesc(arr);
        checkDesc(arr);
// //[DEBUG]
// wypisz(arr, 0, arr.size()-1);


        // mSortAsc(arr, 0, n-1);
        // qSortAsc(arr,0,n-1);
        hSortAsc(arr);
        checkAsc(arr);
//[DEBUG]
// wypisz(arr, 0, arr.size()-1);

        
}