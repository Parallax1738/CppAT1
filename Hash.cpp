#include "Hash.h"
hash::hash() {
    for(int i=0; i < tableSize; i++) {
        HashTable[i] = new item;
        HashTable[i]-> name = "empty";
        HashTable[i]-> age = 0;
        HashTable[i]-> human = 0;
        HashTable[i]-> next = NULL;
    }
}
void hash::AddItem(std::string name, int age, bool human) {
    int index = Hash(name);
    if(HashTable[index] -> name == "empty") {
        HashTable[index] -> name = name;
        HashTable[index] -> age = age;
        HashTable[index] -> human = human;
    }
    else {
        item* Ptr = HashTable[index];
        item* n = new item;
        n->name = name;
        n->age = age;
        n->human = human;
        n->next = NULL;
        while(Ptr-> next != NULL) {
            Ptr = Ptr->next;
        }
        Ptr->next = n;
    }
}
int hash::NumberOfItemsInIndex(int index) {
    int count = 0;
    if(HashTable[index]->name == "empty") {
        return count;
    }
    else {
        count++;
        item* Ptr = HashTable[index];
        while(Ptr->next != NULL) {
            count++;
            Ptr = Ptr->next;
        }
    }
    return count;
}
void hash::PrintTable() {
    int number;
    for(int i = 0; i < tableSize; i++) {
        if(HashTable[i]!= NULL) {
        number = NumberOfItemsInIndex(i);
        std::cout << "index = " << i << std::endl;
        std::cout << HashTable[i]->name << std::endl;
        std::cout << HashTable[i]->age << std::endl;
        std::cout << HashTable[i]->human << std::endl;
        std::cout << "# of items = " << number << std::endl;
        }
    }
}
void hash::PrintItemsInIndex(int index) {
    item* Ptr = HashTable[index];
    if(Ptr->name == "empty") {
        std::cout << "index = " << index << " is empty";
    }
    else {
        std::cout << "index " << index << " contains the following \n";
        while(Ptr != NULL) {
            std::cout << Ptr->name << std::endl;
            std::cout << Ptr->age << std::endl;
            std::cout << Ptr-> human << std::endl;
            Ptr = Ptr->next;
        }
    }
}
int hash::Hash(std::string key) {
    int hash = 0;
    int index;

    for (int i = 0; i < key.length(); i++) {
        hash = hash + (int)key[i];
    }
    index = hash % tableSize;
    return index;
}
void hash::FindName(std::string name) {
    int index = Hash(name);
    bool foundName = false;
    int age;
    bool human;

    item* Ptr = HashTable[index];
    while (Ptr != nullptr) {
        if (Ptr->name == name) {
            foundName = true;
            age = Ptr->age;
            human = Ptr->human;
        }
        Ptr = Ptr->next;
    }
    if (foundName == true) {
        std::cout << "Age = " << age << std::endl;
        std::cout << "Human = " << (human ? "Yes" : "No") << std::endl;
    }
    else {
        std::cout << "Name not found\n";
    }
}