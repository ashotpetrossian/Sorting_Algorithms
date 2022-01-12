#include <vector>
#include <iostream>
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