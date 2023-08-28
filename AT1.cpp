#include "AT1.h"
// Constructor Implementation
Contact::Contact(std::string name, bool human, int age) : name(std::move(name)), human(human), age(age) {

}
// Get Method Implementation
std::string Contact::getName() const {
    return name;
}
int Contact::getAge() const {
    return age;
}
bool Contact::isHuman() const {
    return human;
}
// Set Method Implementation
void Contact::setName(const std::string &name) {
    this->name = name;
}
void Contact::setHuman(bool human) {
    this->human = human;
}
void Contact::setAge(int age) {
    this->age = age;
}
// Make a Contact class with three attributes of at least two different data types.
// Add set and get methods to modify and access the Contact attributes.
// Add a constructor or otherwise to initialise a Contact.
// Make a Node class which is a doubly linked node which has a Contact for its data.
// Add functions to link with either the previous or next nodes.
// Document the Contact and Node classes by documenting the source code.