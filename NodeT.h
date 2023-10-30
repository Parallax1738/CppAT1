#ifndef TNODE_H
#define TNODE_H


#include "Contact.h"
#include <string>

class NodeT
{
public:
    NodeT(Contact Contact);

  NodeT* left;
  NodeT* right;
  NodeT* parent;
  Contact contact;

  void init(Contact data_);

};

#endif

