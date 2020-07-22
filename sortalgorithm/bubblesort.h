#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>
#include "sortAlgorithm.h"
#include <algorithm>

using namespace std;

template <typename T>
class BubbleSort : public SortAlgorithm<T>
{
public:
    BubbleSort() = default;

    vector<T> &sort(vector<T> &array) override
    {
        for (int i = 0, size = array.size(); i < size - 1; ++i)
        {
            bool swapped = false;
            for (int j = 0; j < size - 1 - i; ++j)
            {
                if (array[j] > array[j + 1])
                {
                    swap(array[j], array[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }
        return array;
    }
};

#endif