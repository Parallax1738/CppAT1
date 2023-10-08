#include "Contact.h"
// Method ( Contact ) is called automatically when an object ( e.g. Contact1 ) of the class ( Contact )is created.
// Constructor Attributes include ( name, age, human ).
Contact::Contact(std::string name, int age, bool human)
    // Constructor Parameters are set equal to the Attributes.
    : name(name), age(age), human(human)
    {

    }
// ( Public ) Get method returns value of ( Private ) attribute ( e.g. name ).
std::string Contact::getName() const
{
    // Returns attribute ( name ).
    return name;
}
int Contact::getAge() const
{
    // Returns attribute ( age ).
    return age;
}
bool Contact::isHuman() const
{
    // Returns attribute ( human ).
    return human;
}

// ( Public ) Set method takes the parameter ( e.g. name ) and assigns it to ( e.g. this->name ) attribute.
void Contact::setName(const std::string &name)
{
    // Assigns ( name ) to = Parameter ( this->name ).
    this->name = name;
}
void Contact::setAge(int age)
{
    // Assigns ( age ) to = Parameter ( this->age ).
    this->age = age;
}
void Contact::setHuman(bool human)
{
    // Assigns ( human ) to = Parameter ( this->human ).
    this->human = human;
}

//// Make a Contact class with three attributes of at least two different data types.
//// Add set and get methods to modify and access the Contact attributes.
//// Add a constructor or otherwise to initialise a Contact.
