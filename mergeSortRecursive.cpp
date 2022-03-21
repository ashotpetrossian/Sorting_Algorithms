#include <vector>

template<typename T>
void merge(std::vector<T>& vec, int first, int mid, int last) {
    std::vector<T> tmp(vec.size());
    int first1 = first;
    int last1 = mid;
    int first2 =  mid + 1;
    int last2 = last;

    int index = first;
    while (first1 <= last1 && first2 <= last2) {
        if (vec[first1] < vec[first2]) {
            tmp[index++] = vec[first1++];
        } else {
            tmp[index++] = vec[first2++];
    }
    while (first1 <= last1) {
        tmp[index++] = vec[first1++];
    }
    while (first2 <= last2) {
        tmp[index++] = vec[first2++];
    }
    for (int index = first; index <= last; ++index)
    {
        vec[index] = tmp[index];
    }    
}

template<typename T>
void mergeSort(std::vector<T>& vec, int first, int last) {
    if (first < last) {
        int mid = first + (last - first) / 2;
        mergeSort(vec, first, mid);
        mergeSort(vec, mid + 1, last);
        merge(vec, first, mid, last);
    }
}
