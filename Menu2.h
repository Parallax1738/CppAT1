#pragma once
#include <vector>
#include "Node.h"
#include "Hash.h"


class Menu2 {
public:
    void Menu();
    void subMenu();
    void Display(linkedList* l);
    node* Search(linkedList* l);
    void Sort(linkedList* l);
};