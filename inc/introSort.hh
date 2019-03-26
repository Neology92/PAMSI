#pragma once

#include "functions.hh"
#include "heapSort.hh"
#include "quickSort.hh"


/**
 * @brief Sorts array ascending
 * 
 * @param arr - reference to array (vector<int>)
 * @param l_ind - left index
 * @param r_ind - right index
 * @param deep - głębokość wywołania (wzór: 2*log(N)/M_LN2)
 */
void iSortAsc(std::vector<int> &arr, int l_ind, int r_ind, int deep);

/**
 * @brief Sorts array descending
 * 
 * @param arr - reference to array (vector<int>)
 * @param l_ind - left index
 * @param r_ind - right index
 * @param deep - głębokość wywołania (wzór: 2*log(N)/M_LN2)
 */
void iSortDesc(std::vector<int> &arr, int l_ind, int r_ind, int deep);