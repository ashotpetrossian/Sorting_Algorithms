#include <iostream>
#include <vector>

void counting_sort(std::vector<int>& vec) {
    int max{0};
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    std::vector<int> count(max + 1);
    std::vector<int> output(vec.size());
    for (size_t j = 0; vec[j] ; j++)
    {
        count[vec[j]]++;
    }
    for (size_t i = 1; i < max + 1; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = vec.size() - 1; i >= 0; --i)
    {
        output[count[vec[i]] - 1] = vec[i];
        count[vec[i]]--;
    }
}