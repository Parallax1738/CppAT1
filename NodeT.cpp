#include "NodeT.h"
NodeT::NodeT(Contact data_)
        :contact(data_), right(nullptr), left(nullptr), parent(nullptr) {

}
/*NodeT::NodeT()
{
  left=nullptr;
  right=nullptr;
  parent=nullptr;
  data = "";
}*/

/*NodeT::NodeT(std::string data_)
{
  init(data_);
}*/

void NodeT::init(Contact data_)
{
  left=nullptr;
  right=nullptr;
  parent=nullptr;
  contact=data_;
}

