//
// Created by Max_d on 18/10/2023.
//

#include "Menu2.h"
#include "NodeT.h"

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
        std::cout << "4) View Tree\n";
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
            case 4: {
                nodetree();
                break;
            }
            case 5: {
                hash* Hashy = new hash();
                Hashy->AddItem("Harry", 20, true);
                Hashy->AddItem("Jimmy", 30, false);
                Hashy->AddItem("Kevin", 21, false);
                Hashy->AddItem("Vex", 16, true);
                Hashy->AddItem("Jett", 3, false);
                Hashy->AddItem("Noah", 42, true);

                std::cout << "Sub Menu\n";
                std::cout << "6) Display\n";
                std::cout << "7) Add\n";
                std::cout << "8) Search\n";
                std::cout << "9) Exit\n";
                std::cout << ">>";

                int subChoice;
                {
                    while (true) {
                    std::cin >> subChoice;
                    switch (subChoice) {
                        case 6: {
                            Hashy->PrintTable();
                            //Hashy->PrintItemsInIndex(7);
                            break;
                        }
                        case 7: {
                            std::string name;
                            int age;
                            bool human;

                            std::cout << "Enter name: ";
                            std::cin >> name;
                            std::cout << "Enter age: ";
                            std::cin >> age;
                            std::cout << "Is the person human? (1 for Yes, 0 for No): ";
                            std::cin >> human;

                            Hashy->AddItem(name, age, human);
                            Hashy->PrintTable();
                            break;
                        }
                        case 8: {
                            std::string name = "";
                            while(name != "exit") {
                                std::cout << "Search for \n";
                                std::cin >> name;
                                if(name != "exit") {
                                    Hashy->FindName(name);
                                }
                            }
                            break;
                        }
                        default: {
                            delete Hashy;
                            return;
                        }
                    }
                    }
                }
                break;
            }

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
void Menu2::nodetree()
{
    NodeT n1("Harry");
    NodeT n2("Jimmy");
    NodeT n3("Kevin");
    NodeT n4("Vex");
    NodeT n5("Jett");
    NodeT n6("Noah");


    std::cout << "connecting nodes" << std::endl;

    // Connecting the nodes
    n1.left = &n2;
    n2.parent = &n1;

    n3.parent = &n1;
    n1.right = &n3;

    n4.parent = &n2;
    n2.left = &n4;

    n5.parent = &n2;
    n2.right = &n5;

    n6.parent = &n3;
    n3.left = &n6;

    std::cout << "printing tree iteration" << std::endl;
    // printing the tree
    NodeT* curr = &n1;
    std::cout << "    " << curr->data << std::endl;
    curr = curr->left;
    std::cout << " " << curr->data << " ";
    curr = curr->parent;
    curr = curr->right;
    std::cout << curr->data << std::endl;
    curr = curr->parent;
    curr = curr->left;
    curr = curr->left;
    std::cout << curr->data << " ";
    curr = curr->parent;
    curr = curr->right;
    std::cout << curr->data << " ";
    curr = curr->parent;
    curr = curr->parent;
    curr = curr->right;
    curr = curr->left;
    std::cout << curr->data << " ";

    std::cout << std::endl;

}


