#include <iostream>
#include <vector>

void show(const std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<std::endl;
}

void counting_sort(std::vector<int>& vec) {
    int max{0};
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    std::vector<int> count(max + 1);
    for (size_t i = 0; vec[i]; i++)
    {
        count[vec[i]]++;
    }
    for (size_t i = 0, j = 0; i < count.size(); i++)
    {
        while(count[i]) {
            vec[j] = i;
            ++j;
            --count[i];
        }
    }
}
int main()
{
    std::vector<int> vec {4,2,2,8,3,54,5,54,54,51,7,78,54,21,22,6,6,18};
    counting_sort(vec);
    show(vec);
}