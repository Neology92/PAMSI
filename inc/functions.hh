#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <vector>


// This file contains assistant functions


/**
 * @brief 
 * [Funkcja pomocnicza]
 * Wypisuje tablicę od l elem do r elem
 * 
 * @param arr - tablica do wypisania
 * @param l - left indicator
 * @param r - right indicator
 */
void wypisz(std::vector<int> &arr, int l, int r);


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

/**
 * @brief Swaps two elements in array (vector)
 * 
 * @param array - reference to array (vector<int>)
 * @param index_1 - index to first element to swap
 * @param index_2 - index to second element to swap
 */
void swap(std::vector<int> &array, int index_1, int index_2);