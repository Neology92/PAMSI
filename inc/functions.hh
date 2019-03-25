#pragma once
#include <vector>

// This file contains assistant functions


/**
 * @brief 
 * [Funkcja pomocnicza]
 * Wypisuje tablicę
 * 
 * @param arr - tablica do wypisania
 */
void wypisz(std::vector<int> &arr);


/**
 * @brief 
 * Fills the array with random numbers
 * 
 * @param array - pointer to array
 */
void FillArray(std::vector<int> &array, int n);

/**
 * @brief 
 * Chcecks if the array is sorted ascending
 * 
 * @param array - pointer to array to check
 */
void checkAsc(std::vector<int> &array);


/**
 * @brief 
 * Chcecks if the array is sorted descending
 * 
 * @param array - pointer to array to check
 */
void checkDesc(std::vector<int> &array);