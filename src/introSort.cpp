#include "introSort.hh"



void iSortAsc(std::vector<int> &arr, int l_ind, int r_ind, int deep)
{
    int m_ind;
        if(r_ind - l_ind > 9 && deep > 0)
        {
            m_ind = partitionAsc(arr, l_ind, r_ind);
            iSortAsc(arr, l_ind, m_ind-1, deep-1);      // Na lewo od pivota
            iSortAsc(arr, m_ind, r_ind, deep-1);        // Na prawo od pivota
        }
        else if(l_ind < r_ind)
        {
            hSortAsc(arr, l_ind, r_ind);
        }
}


void iSortDesc(std::vector<int> &arr, int l_ind, int r_ind, int deep)
{
    int m_ind;
        if(r_ind - l_ind > 9 && deep > 0)
        {
            m_ind = partitionDesc(arr, l_ind, r_ind);
            iSortDesc(arr, l_ind, m_ind-1, deep-1);         // Na lewo od pivota
            iSortDesc(arr, m_ind, r_ind, deep-1);           // Na prawo od pivota
        }
        else if(l_ind < r_ind)
        {
            hSortDesc(arr, l_ind, r_ind);
        }
}