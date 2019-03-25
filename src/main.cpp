#include "mergeSort.hh"
#include "quickSort.hh"
 


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
        // hSortDesc(arr, 0, n-1);
        // checkDesc(arr);
// //[DEBUG]
// wypisz(arr, 0, arr.size()-1);


        // mSortAsc(arr, 0, n-1);
        // qSortAsc(arr,0,n-1);
        // hSortAsc(arr,0,n-1);
        checkAsc(arr);
//[DEBUG]
// wypisz(arr, 0, arr.size()-1);

        
}