#include <vector>

template<typename T>
void bubble_sort(std::vector<T>& vec) {
    bool sorted{true};
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        for (size_t j = 0; j < vec.size() - 1 - i; ++j) 
        {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
                sorted = false;
            } 
        }     
        if (sorted == true) { break; }   
    }    
}
