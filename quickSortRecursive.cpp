// median of three pivot selection

#include <iostream>
#include <vector>
#include "utility.h"

template<typename T>
void insertion_sort(std::vector<T>& vec) {
    int j;
    for (size_t i = 1; i < vec.size(); ++i)
    {
        T tmp = vec[i];
        j = i - 1;
        while (j >= 0 && vec[j] > tmp) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = tmp;        
    }    
}

template<typename T>
void sortFirstMiddleLast(std::vector<T>& vec, int first, int mid, int last) {
    if (vec[first] > vec[mid]) {
        Utility::swap(vec[first], vec[mid]);
    }
    if (vec[mid] > vec[last]) {
        Utility::swap(vec[mid], vec[last]);
    }
    if (vec[first] > vec[mid]) {
        Utility::swap(vec[first], vec[mid]);
    }
}

template<typename T>
int partition(std::vector<T>& vec, int first, int last) {
    int mid = first + (last - first) / 2;
    sortFirstMiddleLast(vec, first, mid, last);
    Utility::swap(vec[mid], vec[last - 1]);
    int pivot_index = last - 1;
    T pivot = vec[pivot_index];

    int index_from_left = first + 1;
    int index_from_right = last - 2;
    bool done = false;
    while (!done) {
        while (vec[index_from_left] < pivot) {
            index_from_left++;
        }
        while (vec[index_from_right] > pivot) {
            index_from_right--;
        }
        if (index_from_left < index_from_right) {
            Utility::swap(vec[index_from_left], vec[index_from_right]);
            index_from_left++;
            index_from_right--;
        } else done = true;
    }
    Utility::swap(vec[pivot_index], vec[index_from_left]);
    pivot_index = index_from_left;
    return pivot_index;
}

const int MIN_SIZE = 10;

template<typename T>
void quick_sort(std::vector<T>& vec, int first, int last) {
    if (last - first + 1 < MIN_SIZE) {
        insertion_sort(vec);
    } else {
        int pivot_index = partition(vec, first, last);
        quick_sort(vec,first, pivot_index - 1);
        quick_sort(vec, pivot_index + 1, last);
    }
}