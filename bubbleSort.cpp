#include <vector>
#include <iostream>
#include "utility.h"

template<typename T>
void bubble_sort(std::vector<T>& vec) {
    bool flag{true};
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        for (size_t j = 0; j < vec.size() - 1 - i; j++) // j = i + 1
        {
            if (vec[j] > vec[j + 1]) {  // vec[i] > vec[j]
                Utility::swap(vec[j], vec[j + 1]);
                flag = false;
            } 
        }     
        if (flag == true) { break; }   
    }    
}