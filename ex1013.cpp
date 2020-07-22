#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool predicate(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    auto v = vector<string>{"a", "as", "aasss", "aaaxxxssaa", "aaxxxxxaabba", "xa"};
    auto pivot = partition(v.begin(), v.end(), predicate);

    for (auto it = v.cbegin(); it != pivot; ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}