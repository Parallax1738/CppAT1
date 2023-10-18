#include "NodeT.h"

NodeT::NodeT()
{
  left=nullptr;
  right=nullptr;
  parent=nullptr;
  data = "";
}

NodeT::NodeT(std::string data_)
{
  init(data_);
}

void NodeT::init(std::string data_)
{
  left=nullptr;
  right=nullptr;
  parent=nullptr;
  data = data_;
}

