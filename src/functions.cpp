#include<iostream>


void wypisz(int *arr, int r)
{
    for(int i =0; i <= r; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void FillArray(int *array, int n)
{
    // Randomizin'
    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        array[i]= rand()%10;
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
        std::cout << "Err: Blad sortowania!" << std::endl;
    else        
        std::cout << "Posortowano pomyslnie!" << std::endl;
}