#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    unordered_map<string, size_t> word_count;
    string word;
    while (std::cin >> word)
        ++word_count[word];

    for (const auto &elem : word_count)
        cout << elem.first << " : " << elem.second << "\n";
    return 0;
}