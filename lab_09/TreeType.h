#include <iostream>
#include <string>
#include <fstream>
typedef int ItemType;
struct TreeNode;
#include "QueType.h"
enum OrderType {PRE_ORDER, IN_ORDER, POST_ORDER};
class TreeType
{
public:
  TreeType();                     // constructor
 ~TreeType();                    // destructor
  TreeType(const TreeType& originalTree); 
  void operator=(const TreeType& originalTree);
  // copy constructor
  void MakeEmpty();
  bool IsEmpty() const;
  bool IsFull() const;
  int LengthIs() const; 
  void RetrieveItem(ItemType& item, bool& found);
  void InsertItem(ItemType item);
  void DeleteItem(ItemType item);
  void ResetTree(OrderType order); 
  void GetNextItem (ItemType& item, OrderType order, bool& finished);
  void Print(std::ofstream& outFile) const;
  //TreeNode* PtrToSuccessor_recursive(TreeNode*& tree);
  TreeNode* PtrToSuccessor(TreeNode*& tree);
  void PTSPrint();
  bool IsBST();
  int LeafCount();
  int SingleParentCount();
  void Anscestors(ItemType value);
private:
  TreeNode* root;
  QueType preQue;
  QueType inQue;
  QueType postQue;
};

