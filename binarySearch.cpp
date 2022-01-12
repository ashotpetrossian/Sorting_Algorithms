#include <vector>
#include <iostream>
#include "utility.h"

template<typename T>
int binary_search(std::vector<T>& vec, T key, int start, int end) {
    if (start <= end) {
        int mid = (start + end) / 2;
        if (vec[mid] == key) { return mid; }
        if (vec[mid] > key) { return binary_search(vec, key, start, mid - 1); }
        if (vec[mid] < key) {  return binary_search(vec, key, mid + 1, end); }
    }
    return -1;
}