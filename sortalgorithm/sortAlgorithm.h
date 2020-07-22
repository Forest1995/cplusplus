#ifndef SORT_ALGORITHM_H
#define SORT_ALGORITHM_H
#include <vector>

using namespace std;
template <typename X>

class SortAlgorithm
{
public:
    virtual vector<X> &sort(vector<X> &array) = 0;

    //To do 可以重载其他顺序容器的排序算法 例如list deque等。

    // virtual deque<X> &sort(deque<X> &array) = 0;
    // virtual list<X> &sort(list<X> &array) = 0;
};

#endif