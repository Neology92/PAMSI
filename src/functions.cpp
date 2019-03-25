#include<iostream>

#include "functions.hh"

#define RANGE 10    // of randomized numbers (-1)

void wypisz(std::vector<int> &arr)
{
    for(unsigned int i = 0; i < arr.size(); i++)
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
        array.push_back(rand()%RANGE);
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