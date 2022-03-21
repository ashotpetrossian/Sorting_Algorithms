#include <vector>

template<typename T>
void insertion_sort(std::vector<T>& vec) {
    for (int i = 1; i < vec.size(); ++i)
    {
        T tmp = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > tmp) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = tmp;        
    }    
}
