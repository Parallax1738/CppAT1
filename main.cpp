//
// Created by Max_d on 9/10/2023.
//

#include "Node.h"

int main() {
    linkedList* l = new linkedList();
    l -> append(Contact("Harry", 20, true));
    l -> append(Contact("Jimmy", 30, false));
    l -> print();
    delete l;
    return 0;
}
// MENU

// Search
// Sorting