//
// Created by Max_d on 18/10/2023.
//

#include "Menu2.h"

void Menu2::Menu() {
    linkedList* l = new linkedList();
    l -> append(Contact("Harry", 20, true));
    l -> append(Contact("Jimmy", 30, false));
    l -> append(Contact("Kevin", 21, false));
    l -> append(Contact("Vex", 16, true));
    l -> append(Contact("Jett", 3, false));
    l -> append(Contact("Noah", 42, true));
    while (true) {

        std::cout << "Menu\n";
        std::cout << "1) Display\n";
        std::cout << "2) Search\n";
        std::cout << "3) Sort\n";
        std::cout << "4) View Tree (NULL)\n";
        std::cout << "5) Hash Table (NULL)\n";
        std::cout << "6) Exit\n";
        std::cout << ">>";
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Contacts:\n";
                Display(l);
                break;
            case 2: {
                std::cout << "Search for Contact\n";
                std::cout << ">>";
                std::cout << "Searching...\n";
                node *n = Search(l);
                if (n) {
                    printf("Found: %s\n", n->contact.getName().c_str());
                    std::cout << std::endl;
                }
                else {
                    printf("Contact Not Found\n\n");
                }
                break;
            }
            case 3: {
                Sort(l);
                std::cout << std::endl;
                break;
            }
            case 4:
                // TREE IMPLEMENTATION ( RILEY )
            case 5:
                // HASHING IMPLEMENTATION ( HARRY )
                break;
            default:
                delete l;
                return;
        }
    }
}
void Menu2::Display(linkedList* l) {
    l -> print();
}
node* Menu2::Search(linkedList* l) {

    std::string value;
    std::cin >> value;
    node* n = l -> start;
    while (n) {
        if (n -> contact.getName() == value) {
            return n;
        }
        else {
            n = n -> pNext;
        }
    }
    return nullptr;
}
void Menu2::Sort(linkedList* l) {
    // Create a vector to hold the contacts for sorting
    std::vector<Contact> contacts;

    // Copy the contacts from the linked list to the vector
    node* currentNode = l->start;
    while (currentNode) {
        contacts.push_back(currentNode->contact);
        currentNode = currentNode->pNext;
    }

    // Sort the contacts based on age using bubble sort
    for (size_t i = 0; i < contacts.size() - 1; ++i) {
        for (size_t j = 0; j < contacts.size() - i - 1; ++j) {
            if (contacts[j].getAge() > contacts[j + 1].getAge()) {
                std::swap(contacts[j], contacts[j + 1]);
            }
        }
    }
    // Display the sorted contacts
    std::cout << "Contacts sorted by age:\n";
    for (const Contact& contact : contacts) {
        std::cout << "Name: " << contact.getName() << ", Age: " << contact.getAge() << "\n";
    }
}

