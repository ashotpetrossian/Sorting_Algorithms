#include <vector>

template<typename T>
void selection_sort(std::vector<T>& vec) {
    int min_index{0};
    bool sorted = true;
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        min_index = i;
        for (size_t j = i + 1; j < vec.size(); ++j)
        {
            if (vec[j] < vec[min_index]) {
                min_index = j;
                sorted = false;
            }
        }
        if (sorted == true) { break; }
        std::swap(vec[min_index], vec[i]);
    }
}
