#include "quickSort.hh"



void qSortAsc(std::vector<int> &arr, int l_ind, int r_ind)
{
    // [DEBUG]
    // wypisz(arr, r_ind, l_ind);

    int m_ind;
        if(l_ind < r_ind)
        {
            m_ind = partitionAsc(arr, l_ind, r_ind);
            qSortAsc(arr, l_ind, m_ind-1); // Na lewo od pivota
            qSortAsc(arr, m_ind, r_ind);        // Na prawo od pivota
        }

    // [DEBUG]
    // wypisz(arr, r_ind, l_ind);
}


int partitionAsc(std::vector<int> &arr, int l_ind, int r_ind)
{
    srand(time(NULL));
    int random = rand()%(r_ind-l_ind)+l_ind;
    int pivot = arr[random];                    // choose pivot randomly

        while(l_ind <= r_ind)
        {
            while(arr[l_ind] < pivot)           // jeśli wartosc po lewej mniejsza od pivota
            {                                   // przesun wskaznik w prawo
                l_ind++;
            }
            
            while(arr[r_ind] > pivot)           // jeśli wartosc na prawo - większa/równa pivot
            {                                   // przesuń wskażnik w lewo
                r_ind--;
            }
            
            if(l_ind <= r_ind)                   // jesli ustawiono na dwie wartości, które znajdują się po złych stronach
            {                                   // zamień miejscami, a nastęþnie popchnij wskaźniki dalej
                int buff = arr[l_ind]; 
                arr[l_ind] = arr[r_ind];
                arr[r_ind] = buff;
                l_ind++;
                r_ind--;
            }    
        }
    return l_ind;
}



void qSortDesc(std::vector<int> &arr, int l_ind, int r_ind)
{
    // [DEBUG]
    // wypisz(arr, r_ind, l_ind);

    int m_ind;
        if(l_ind < r_ind)
        {
            m_ind = partitionDesc(arr, l_ind, r_ind);
            qSortDesc(arr, l_ind, m_ind-1); // Na lewo od pivota
            qSortDesc(arr, m_ind, r_ind);        // Na prawo od pivota
        }

    // [DEBUG]
    // wypisz(arr, r_ind, l_ind);
}


int partitionDesc(std::vector<int> &arr, int l_ind, int r_ind)
{
    srand(time(NULL));
    int random = rand()%(r_ind-l_ind)+l_ind;
    int pivot = arr[random];                    // choose pivot randomly

        while(l_ind <= r_ind)
        {
            while(arr[l_ind] > pivot)           // jeśli wartosc po lewej mniejsza od pivota
            {                                   // przesun wskaznik w prawo
                l_ind++;
            }
            
            while(arr[r_ind] < pivot)           // jeśli wartosc na prawo - większa/równa pivot
            {                                   // przesuń wskażnik w lewo
                r_ind--;
            }
            
            if(l_ind <= r_ind)                   // jesli ustawiono na dwie wartości, które znajdują się po złych stronach
            {                                   // zamień miejscami, a nastęþnie popchnij wskaźniki dalej
                int buff = arr[l_ind]; 
                arr[l_ind] = arr[r_ind];
                arr[r_ind] = buff;
                l_ind++;
                r_ind--;
            }    
        }
    return l_ind;
}