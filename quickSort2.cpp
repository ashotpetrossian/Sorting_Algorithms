// last element as pivot

#include <iostream>
#include <vector>
#include "utility.h"

template<typename T>
int partition(std::vector<T>& vec, int first, int last) {
    T pivot = vec[last];

    int i = first - 1;
    for (size_t j = first; j <= last - 1; j++)
    {
        if (vec[j] < pivot) {
            ++i;
            Utility::swap(vec[j], vec[i]);
        }
    }
    Utility::swap(vec[i + 1], vec[last]);
    return i + 1;
}

template<typename T>
void quick_sort(std::vector<T>& vec, int first, int last) {
    if (first < last) {
        int pivot_index = partition(vec, first, last);
        quick_sort(vec, first, pivot_index - 1);
        quick_sort(vec, pivot_index + 1, last);
    }
}