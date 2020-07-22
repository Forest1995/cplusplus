#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>
using namespace std;

template <typename T>
class MergeSort : public SortAlgorithm<T>
{
public:
    MergeSort() = default;

    vector<T> &sort(vector<T> &array) override
    {
        doSort(array);
        return array;
    }

private:
    void doSort(vector<T> &array)
    {
        if (array.size() <= 1)
            return;

        size_t length = array.size();
        int mid = length / 2;
        vector<T> left, right;
        for (size_t j = 0; j < mid; j++)
            left.push_back(array[j]);
        for (size_t j = 0; j < length - mid; j++)
            right.push_back(array[mid + j]);

        doSort(left);
        doSort(right);
        merge(left, right, array);
    }
    void merge(vector<T> &left, vector<T> &right, vector<T> &array)
    {
        int nL = left.size();
        int nR = right.size();
        int i = 0, j = 0, k = 0;

        while (j < nL && k < nR)
        {
            if (left[j] < right[k])
            {
                array[i] = left[j];
                j++;
            }
            else
            {
                array[i] = right[k];
                k++;
            }
            i++;
        }
        while (j < nL)
        {
            array[i] = left[j];
            j++;
            i++;
        }
        while (k < nR)
        {
            array[i] = right[k];
            k++;
            i++;
        }
    }
};

#endif