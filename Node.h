#pragma once
#include <cstring>
#include <iostream>
#include "Contact.h"
class node {
public:
    node(Contact Contact, node *pNext, node *pPrev);

    Contact contact;
    node* pPrev;
    node* pNext;

    node(Contact tempData);
};

class linkedList {
public:
    // Head of List
    node* start;
    // Add to end of list
    void append(Contact x);
    // Access last node
    node* last();
    //Print List
    void print();
    // Empty List
    linkedList();
    // Cleanup
    ~linkedList();
};