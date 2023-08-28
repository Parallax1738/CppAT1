#ifndef ASSIGNMENTS_AT1_H
#define ASSIGNMENTS_AT1_H
#include <string>
// Contact Class
class Contact {
private:
    // Three Attributes with Two Data Types
    std::string name;
    int age;
    bool human;
public:
    // Constructor
    Contact(std::string name, bool human, int age);

    // Get Method
    std::string getName() const;
    int getAge() const;
    bool isHuman() const;

    // Set Method
    void setName(const std::string &name);
    void setAge(int age);
    void setHuman(bool human);
};
#endif //AT1.h
