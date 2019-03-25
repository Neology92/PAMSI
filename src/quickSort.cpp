#include <iostream>
#include <cstdlib>
#include <ctime>

#include "quickSort.hh"


int partition(int arr[], int l_ind, int r_ind)
{
    srand(time(NULL));
    int pivot = rand()%(r_ind-l_ind+1)+l_ind;
        while(l_ind < r_ind)
        {
            if(arr[l_ind] < arr[pivot])         // jeśli wartosc po lewej mniejsza od powiota
            {                                   // przesun wskaznik w prawo
                l_ind++;
            }
            else if(arr[r_ind] >= arr[pivot])   // jeśli wartosc na prawo - większa/równa pivot
            {                                   // przesuń wskażnik w lewo
                r_ind--;
            }
            else                                // jesli ustawiono na dwie wartości, które znajdują się po złych stronach
            {                                   // zamień miejscami
                int buff = arr[l_ind]; 
                arr[l_ind] = arr[r_ind];
                arr[r_ind] = buff;
            }    
        }
    return pivot;
}

void qSort(int arr[], int l_ind, int r_ind)
{
    wypisz(arr, r_ind);                   //////POMOCNICZE
    int pivot;
        while(l_ind < r_ind)
        {
            pivot = partition(arr, l_ind, r_ind);
            qSort(arr, l_ind, pivot-1 ); // Na lewo od pivota
            qSort(arr, pivot+1, r_ind);        // Na prawo od pivota
        }
    wypisz(arr, r_ind);                   //////POMOCNICZE
}