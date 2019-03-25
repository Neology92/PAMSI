#pragma once

#include "functions.hh"

// quickSort.hh - contains announcements o Quick-sort functions

/**
 * @brief Sorts array Ascending
 * 
 * @param arr  - reference to array (vector<int>) to sort
 * @param l_ind - left indicator
 * @param r_ind - right indicator
 */
void qSortAsc(std::vector<int> &arr, int l_ind, int r_ind);

/**
 * @brief Partitioning to smaller problems.
 * Swaping (in respect of pivot) while partitioning.
 * 
 * @param arr - array (vector<int>) to sort.
 * @param l_ind - left index of poart of array to sort
 * @param r_ind - right index of part of array to sort
 * @return int - middle index
 */
int partitionAsc(std::vector<int> &arr, int l_ind, int r_ind);


/**
 * @brief Sorts array Descending
 * 
 * @param arr  - reference to array (vector<int>) to sort
 * @param l_ind - left indicator
 * @param r_ind - right indicator
 */
void qSortDesc(std::vector<int> &arr, int l_ind, int r_ind);

/**
 * @brief Partitioning to smaller problems.
 * Swaping (in respect of pivot) while partitioning.
 * 
 * @param arr - array (vector<int>) to sort.
 * @param l_ind - left index of poart of array to sort
 * @param r_ind - right index of part of array to sort
 * @return int - middle index
 */
int partitionDesc(std::vector<int> &arr, int l_ind, int r_ind);