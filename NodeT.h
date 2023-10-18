#ifndef TNODE_H
#define TNODE_H

#include <string>

class NodeT
{
public:
  NodeT* left;
  NodeT* right;
  NodeT* parent;
  std::string data;

  NodeT();
  NodeT(std::string data_);

  void init(std::string data_);

};

#endif

