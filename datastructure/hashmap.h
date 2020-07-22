#ifndef HASHMAP_H
#define HASHMAP_H

#include <iostream>
#include <array>
#include <list>
#include <functional>
#include "hashtableentry.h"
using namespace std;

template <typename Key, typename Value>
class HashMap
{
public:
    HashMap() = default;
    ~HashMap() = default;
    bool put(Key key, Value value)
    {
        hash<Key> hash_object;
        int slotIdx = hash_object(key) % 128;
        list<HashTableEntry<Key, Value>> slot = slots[slotIdx];
        for (auto &entry : slot)
        {
            if (entry.getKey() == key)
            {
                //already exists
                entry.setValue(value);
                return true;
            }
        }
        slot.push_back(HashTableEntry<Key, Value>(key, value));
        slots[slotIdx] = slot;
        return true;
    }
    bool remove(Key key)
    {
        hash<Key> hash_object;
        int slotIdx = hash_object(key) % 128;
        list<HashTableEntry<Key, Value>> slot = slots[slotIdx];
        auto iter = slot.begin();
        for (auto iter = slot.begin(); iter != slot.end(); ++iter)
        {
            if ((*iter).getKey() == key)
            {
                //already exists
                slot.erase(iter);
                slots[slotIdx] = slot;
                return true;
            }
        }
        return false;
    }
    Value get(Key key)
    {
        hash<Key> hash_object;
        int slotIdx = hash_object(key) % 128;
        list<HashTableEntry<Key, Value>> slot = slots[slotIdx];
        for (auto entry : slot)
        {
            if (entry.getKey() == key)
            {
                // exists
                return entry.getValue();
            }
        }
        Value V;
        return V;
    }
    Value operator[](Key key)
    {
        hash<Key> hash_object;
        int slotIdx = hash_object(key) % 128;
        list<HashTableEntry<Key, Value>> slot = slots[slotIdx];
        for (auto entry : slot)
        {
            if (entry.getKey() == key)
            {
                // exists
                return entry.getValue();
            }
        }
        Value V;
        return V;
    }

private:
    array<list<HashTableEntry<Key, Value>>, 128> slots;
};

#endif