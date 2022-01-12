#ifndef UTILITY_H_
#define UTILITY_H_ 

namespace Utility {
    template<typename T>
    void swap(T& t1, T& t2) {
        T tmp = t1;
        t1 = t2;
        t2 = tmp;
    }
}

#endif