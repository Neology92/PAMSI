#pragma once

#include "functions.hh"

// mergeSort.hh - contains announcements o Merge-sort functions


/**
 * @brief Sorting array Ascending.
 * Slices array to smaller problems.
 * Calls merge() for segregated (treats 1-element array as sorted).
 * 
 * @param arr - pointer to array to sort.
 * @param l_index - Array start index.
 * @param r_index - Array end index.
 */
void mSort(std::vector<int> &arr, int l_index, int r_index);
void merge(std::vector<int> &arr, int l_index, int m_index, int r_index);



/**
 * @brief Sorting array Descending.
 * Slices array to smaller problems.
 * Calls merge() for segregated (treats 1-element array as sorted).
 * 
 * @param arr - pointer to array to sort.
 * @param l_index - Array start index.
 * @param r_index - Array end index.
 */
void mSortDesc(std::vector<int> &arr, int l_index, int r_index);
void mergeDesc(std::vector<int> &arr, int l_index, int m_index, int r_index);

