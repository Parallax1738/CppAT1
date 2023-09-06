#pragma once
#include <cstring>
// Node Class
class Node {
public:
    Node(int data);

private:
    int Data;
    Node* pNext;
    Node* pPrev;
};


