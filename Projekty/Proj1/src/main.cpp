#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../headers/mergeSort.hh"

using namespace std;

void FillArray(int *array, int n);
void check(int *array, int n);

int main()
{
    int n;

    cout << "Podaj wielkosc: ";
    cin >> n;

    // Alocate memory for N tab
    int *arr = new int[n];
    
    FillArray(arr, n);

        // mSortDesc(arr, 0, n-1);
        mSort(arr, 0, n-1);
        check(arr, n);
        
    delete [] arr;
}


void FillArray(int *array, int n)
{
    // Randomizin'
    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        array[i]= rand();
    }
}

void check(int *array, int n)
{
    bool Err = 0;
    for (int i=1; i < n; i++)
    {
        if(array[i-1] > array[i])
        {
            Err = 1;
            break;
        }
    }

    if(Err)
        cout << "Err: Blad sortowania!" << endl;
    else        
        cout << "Posortowano pomyslnie!" << endl;
}