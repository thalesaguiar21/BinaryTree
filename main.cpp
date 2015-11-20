#include <iostream>
#include "Node.h"
#include "BinaryTree.h"
using std::cout;
using std::endl;

int main()
{
	BinaryTree *bTree = new BinaryTree();
	bTree->addNode(125);
	cout << "\n";
	bTree->preOrdem();
	//bTree->preOrdem();
	delete bTree;
	return 0;
}