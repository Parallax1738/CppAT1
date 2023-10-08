#include "Node.h"
node::node(Contact tempData)
    :contact(tempData), pNext(nullptr), pPrev(nullptr) {

}
linkedList::linkedList() {
    start = nullptr;
}
linkedList::~linkedList() {
    std::cout << "List Cleared";
    node* n = start;
    while(n)
    {
        if (n->pPrev)
        {
            delete n->pPrev;
        }
        n = n->pNext;
    }
    delete n;
}
void linkedList::append(Contact x) {
    node *pNew = new node(x);
    if (start == nullptr) {
        start = pNew;
        return;
    }
    node* p = last();
    p->pNext = pNew;
    pNew->pPrev = p;
}
node* linkedList::last() {
    if (start == nullptr)
        return nullptr;
    node* p = start;
    for (; p -> pNext != nullptr; p = p -> pNext) {}
    return p;
}
void linkedList::print() {
    node* p = start;
    while (p) {
        std::cout << "Name: " << p->contact.getName() << std::endl;
        std::cout << "Age: " << p->contact.getAge() << std::endl;
        std::cout << "Human: " << (p->contact.isHuman() ? "Yes" : "No") << std::endl;
        p = p -> pNext;
    }
}
/// Make a Node class which is a doubly linked node which has a Contact for its data.
/// Add functions to link with either the previous or next nodes.
/// Document the Contact and Node classes by documenting the source code.