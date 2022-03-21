#include <vector>

void counting_sort(std::vector<int>& vec) {
    int max{0};
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    std::vector<int> count(max + 1);
    for (int i = 0; vec[i]; ++i)
    {
        count[vec[i]]++;
    }
    for (int i = 0, j = 0; i < count.size(); ++i)
    {
        while(count[i]) {
            vec[j] = i;
            ++j;
            --count[i];
        }
    }
}
