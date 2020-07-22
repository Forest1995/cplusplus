#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

size_t bigerThan6(vector<string> const &v)
{
    return count_if(v.cbegin(), v.cend(),
                    [](string const &s) { return s.size() > 6; });
}

int main()
{
    vector<string> v{"1234", "123456", "1234567d", "1234567xx", "1234567", "1234567"};
    cout << "ex10.20: " << bigerThan6(v) << endl;

    return 0;
}