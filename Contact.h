#pragma once
#include <string>
#include <iostream>

// Contact Class
class Contact {
private:
    // Sequence of Characters ( name ).
    std::string name;
    // Integer at least 16 bits ( age )
    int age;
    // Boolean ( human )
    bool human;
public:
    // Constructor
    Contact(std::string name, int age, bool human);

    // Set Method
    void setName(const std::string &TempName);
    void setAge(int TempAge);
    void setHuman(bool TempHuman);

    // Get Method
    std::string getName() const;
    int getAge() const;
    bool isHuman() const;
};