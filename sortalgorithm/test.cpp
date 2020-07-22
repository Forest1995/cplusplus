#include "quickSort.h"
#include "mergesort.h"
#include "bubblesort.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<int> array{3, 5, -1, 7, 9, 2, 3, 1, 0, 7, 5, 4, 10, 111};

    vector<double> darray{3.55, 5.22, 5.2222, 4.3, 5, 10, 2};

    vector<string> sarray{"a", "ccc", "aaaa", "bxxx", "abc"};

    cout << "Before sort:\n";
    for (auto x : array)
        cout << x << " ";
    cout << endl;

    for (auto x : darray)
        cout << x << " ";
    cout << endl;

    for (auto x : sarray)
        cout << x << " ";
    cout << endl;

    QuickSort<int> qSort1;
    QuickSort<double> qSort2;
    QuickSort<string> qSort3;
    auto quickresult1 = qSort1.sort(array);
    auto quickresult2 = qSort2.sort(darray);
    auto quickresult3 = qSort3.sort(sarray);

    MergeSort<int> msort1;
    MergeSort<double> msort2;
    MergeSort<string> msort3;
    auto mergeresult1 = msort1.sort(array);
    auto mergeresult2 = msort2.sort(darray);
    auto mergeresult3 = msort3.sort(sarray);

    BubbleSort<int> bsort1;
    BubbleSort<double> bsort2;
    BubbleSort<string> bsort3;
    auto bubbleresult1 = bsort1.sort(array);
    auto bubbleresult2 = bsort2.sort(darray);
    auto bubbleresult3 = bsort3.sort(sarray);

    cout << "After quicksort:\n";
    for (auto x : quickresult1)
        cout << x << " ";
    cout << endl;

    for (auto x : quickresult2)
        cout << x << " ";
    cout << endl;
    for (auto x : quickresult3)
        cout << x << " ";
    cout << endl;

    cout << "After mergesort:\n";
    for (auto x : mergeresult1)
        cout << x << " ";
    cout << endl;

    for (auto x : mergeresult2)
        cout << x << " ";
    cout << endl;

    for (auto x : mergeresult3)
        cout << x << " ";
    cout << endl;

    cout << "After bubblesort:\n";
    for (auto x : bubbleresult1)
        cout << x << " ";
    cout << endl;

    for (auto x : bubbleresult2)
        cout << x << " ";
    cout << endl;

    for (auto x : bubbleresult3)
        cout << x << " ";
    cout << endl;

    return 0;
}