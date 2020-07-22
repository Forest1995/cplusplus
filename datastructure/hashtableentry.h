#ifndef HASHTABLEENTRY_H
#define HASHTABLEENTRY_H

#include <iostream>
#include <vector>
using namespace std;

template <typename Key, typename Value>
class HashTableEntry
{
public:
    HashTableEntry(Key key, Value value)
    {
        _key = key;
        _value = value;
    }
    ~HashTableEntry() {}
    void setKey(Key key) { _key = key; }
    void setValue(Value value) { _value = value; }
    Key getKey() { return _key; }
    Value getValue() { return _value; }

private:
    Key _key;
    Value _value;
};
#endif