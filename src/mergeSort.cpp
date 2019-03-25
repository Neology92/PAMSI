#include "mergeSort.hh"


void mSortAsc(std::vector<int> &arr, int l_index, int r_index)
{

    if (l_index < r_index)
    {
        int m_index = (l_index + r_index)/2;

        mSortAsc(arr, l_index, m_index);          // Left Sort
        mSortAsc(arr, m_index+1, r_index);          // Right Sort
        mergeAsc(arr, l_index, m_index, r_index);

        // wypisz(arr, r_index);    // POMOCNICZE

    }
}

void mergeAsc(std::vector<int> &arr, int l_index, int m_index, int r_index)
{

    std::vector<int> assistantArr;
    int curr = l_index;
    int l_ptr = 0;
    int r_ptr = m_index-l_index + 1;

    // Rewrite array to assistant array
    for(int i = l_index; i <= r_index; i++)
    {
        assistantArr.push_back(arr[i]);
    }

    while(l_ptr <= m_index-l_index && r_ptr <= r_index-l_index)
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

    
    while(l_ptr <= m_index-l_index)
    {
        arr[curr] = assistantArr[l_ptr];
        l_ptr++;
        curr++;
    }
    while(r_ptr <= r_index-l_index)
    {
        arr[curr] = assistantArr[r_ptr];
        r_ptr++;
        curr++;
    }
}


void mSortDesc(std::vector<int> &arr, int l_index, int r_index)
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

void mergeDesc(std::vector<int> &arr, int l_index, int m_index, int r_index)
{
    std::vector<int> assistantArr;
    int curr = l_index;
    int l_ptr = 0;
    int r_ptr = m_index-l_index + 1;

    // Rewrite array to assistant array
    for(int i = l_index; i <= r_index; i++)
    {
        assistantArr.push_back(arr[i]);
    }

    while(l_ptr <= m_index-l_index && r_ptr <= r_index-l_index)
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

    
    while(l_ptr <= m_index-l_index)
    {
        arr[curr] = assistantArr[l_ptr];
        l_ptr++;
        curr++;
    }
    while(r_ptr <= r_index-l_index)
    {
        arr[curr] = assistantArr[r_ptr];
        r_ptr++;
        curr++;
    }
}