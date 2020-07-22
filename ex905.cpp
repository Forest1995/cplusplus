
#include <iostream>
#include <vector>
using namespace std;

vector<int>::const_iterator find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
    while (begin != end)
    {
        if (*begin == i)
            return begin;
        ++begin;
    }
    return end;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = find(vec.cbegin(), vec.cend(), 7);
    cout << *iter;
}