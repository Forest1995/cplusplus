#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
template <typename T>
size_t get_number(T t, vector<T> const &vt)
{
    size_t n = 0;
    auto iter = vt.begin();

    do
    {
        iter = find(iter, vt.end(), t);
        if (iter != vt.end())
        {
            ++n;
            ++iter;
        }
    } while (iter != vt.end());
    return n;
}

int main()
{
    vector<double> vd = {1, 2, 3, 3.14, 4, 3.14, 5, 6.28};
    vector<int> vi = {1, 2, 3, 3, 4, 3, 5, 6};
    vector<string> vs = {"a", "bb", "ccc", "dddd"};

    cout << get_number(3.14, vd) << endl;
    cout << get_number(3, vi) << endl;
    cout << get_number(string("a"), vs) << endl;

    return 0;
}