#include <iostream>
#include <vector>


#include "mergeSort.hh"


void mSort(int *arr, int l_index, int r_index)
{

    if (l_index < r_index)
    {
        int m_index = (l_index + r_index)/2;

        mSort(arr, l_index, m_index);          // Left Sort
        mSort(arr, m_index+1, r_index);          // Right Sort
        merge(arr, l_index, m_index, r_index);

        // wypisz(arr, r_index);    // POMOCNICZE

    }
}

void merge(int *arr, int l_index, int m_index, int r_index)
{

    int *assistantArr = new int[r_index];
    int curr = l_index;
    int l_ptr = l_index;
    int r_ptr = m_index+1;

    // Rewrite array to assistant array
    for(int i = l_index; i <= r_index; i++)
    {
        assistantArr[i] = arr[i];
    }

    while(l_ptr <= m_index && r_ptr <= r_index)
    {
        if(assistantArr[l_ptr] < assistantArr[r_ptr])
        {
            arr[curr] = assistantArr[l_ptr];
            l_ptr++;
        }
        else
        {
            arr[curr] = assistantArr[r_ptr];
            r_ptr++;
        }

        
        curr++;
    }

    
    while(l_ptr <= m_index)
    {
        arr[curr] = assistantArr[l_ptr];
        l_ptr++;
        curr++;
    }
    while(r_ptr <= r_index)
    {
        arr[curr] = assistantArr[r_ptr];
        r_ptr++;
        curr++;
    }

    delete [] assistantArr;
}


void mSortDesc(int *arr, int l_index, int r_index)
{

    if (l_index < r_index)
    {
        int m_index = (l_index + r_index)/2;

        mSortDesc(arr, l_index, m_index);          // Left Sort
        mSortDesc(arr, m_index+1, r_index);          // Right Sort
        mergeDesc(arr, l_index, m_index, r_index);

        // wypisz(arr, r_index);    // OMOCNICZE

    }
}

void mergeDesc(int *arr, int l_index, int m_index, int r_index)
{
    int *assistantArr = new int[r_index];
    int curr = l_index;
    int l_ptr = l_index;
    int r_ptr = m_index+1;

    // Rewrite array to assistant array
    for(int i = l_index; i <= r_index; i++)
    {
        assistantArr[i] = arr[i];
    }

    while(l_ptr <= m_index && r_ptr <= r_index)
    {
        if(assistantArr[l_ptr] > assistantArr[r_ptr])
        {
            arr[curr] = assistantArr[l_ptr];
            l_ptr++;
        }
        else
        {
            arr[curr] = assistantArr[r_ptr];
            r_ptr++;
        }

        
        curr++;
    }

    
    while(l_ptr <= m_index)
    {
        arr[curr] = assistantArr[l_ptr];
        l_ptr++;
        curr++;
    }
    while(r_ptr <= r_index)
    {
        arr[curr] = assistantArr[r_ptr];
        r_ptr++;
        curr++;
    }

    delete [] assistantArr;
}