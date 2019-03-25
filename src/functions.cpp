#include<iostream>

#include "functions.hh"

#define RANGE 0    // of randomized numbers (-1) (range of int for 0)

void wypisz(std::vector<int> &arr, int l, int r)
{
    for(int i = l; i <= r; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void FillArray(std::vector<int> &array, int n)
{
    // Randomizin'
    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        #if RANGE
        array.push_back(rand()%RANGE);
        #endif

        #if !RANGE
        array.push_back(rand());
        #endif
    }
}

void checkAsc(std::vector<int> &array)
{
    bool Err = 0;
    for (unsigned int i=1; i < array.size(); i++)
    {
        if(array[i-1] > array[i])
        {
            Err = 1;
            break;
        }
    }

    if(Err)
        std::cout << "Err: Blad sortowania!" << std::endl;
    else        
        std::cout << "Posortowano pomyslnie rosnąco!" << std::endl;
}

void checkDesc(std::vector<int> &array)
{
    bool Err = 0;
    for (unsigned int i=1; i < array.size(); i++)
    {
        if(array[i-1] < array[i])
        {
            Err = 1;
            break;
        }
    }

    if(Err)
        std::cout << "Err: Blad sortowania!" << std::endl;
    else        
        std::cout << "Posortowano pomyslnie malejąco!" << std::endl;
}