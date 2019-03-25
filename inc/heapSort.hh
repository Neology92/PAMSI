#pragma once

#include "functions.hh"


// heapSort.hh - contains announcements o Heap-sort functions


/**
 * @brief Sorts array Ascending
 * 
 * @param arr - reference to array (std::vector<int>) to sort
 */
void hSortAsc(std::vector<int> &arr);

/**
 * @brief Validates max heap (Ascending)
 * 
 * @param arr - reference to arry to make max heap
 * @param parentIndex
 */
void makeMaxHeapAsc(std::vector<int> &arr, int size, int parentIndex);

/**
 * @brief Sorts array descending
 * 
 * @param arr - reference to array (std::vector<int>) to sort
 */
void hSortDesc(std::vector<int> &arr);

/**
 * @brief Validates max heap (descending)
 * 
 * @param arr - reference to arry to make max heap
 * @param parentIndex
 */
void makeMaxHeapDesc(std::vector<int> &arr, int size, int parentIndex);