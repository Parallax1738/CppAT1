#pragma once
#include <iostream>
#include <string>

class hash {
private:
    static const int tableSize = 20;
    struct item {
        std::string name;
        int age;
        bool human;
        item* next;
    };
    item* HashTable[tableSize];
public:
    hash();
    int Hash(std::string key);
    void AddItem(std::string name, int age, bool human);
    int NumberOfItemsInIndex(int index);
    void PrintTable();
    //void PrintItemsInIndex(int index);
    void FindName(std::string name);
};