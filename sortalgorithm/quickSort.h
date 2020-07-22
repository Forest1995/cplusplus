#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>
#include "sortAlgorithm.h"
#include <algorithm>
using namespace std;

template <typename T>
class QuickSort : public SortAlgorithm<T>
{
public:
    QuickSort() = default;

    vector<T> &sort(vector<T> &array) override
    {
        doSort(array, 0, array.size() - 1);
        return array;
    }

private:
    void doSort(vector<T> &array, int left, int right)
    {
        if (left < right)
        {
            int pivot = partition(array, left, right);
            doSort(array, left, pivot - 1);
            doSort(array, pivot + 1, right);
        }
    }

    int partition(vector<T> &array, int left, int right)
    {
        T pivot = array[right];
        int i = left;
        for (int j = left; j < right; j++)
        {
            if (array[j] < pivot)
            {
                swap(array[i], array[j]);
                i++;
            }
        }
        swap(array[i], array[right]);
        return i;
    }
};

#endif