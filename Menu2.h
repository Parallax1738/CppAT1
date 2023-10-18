#pragma once
#include <vector>
#include "Node.h"
#include "Hash.h"
#include "NodeT.h"



class Menu2 {
public:
    void Menu();
    void Display(linkedList* l);
    node* Search(linkedList* l);
    void Sort(linkedList* l);
    void nodetree();
};