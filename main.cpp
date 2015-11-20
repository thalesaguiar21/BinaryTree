#include <iostream>
#include "Node.h"
#include "BinaryTree.h"
using std::cout;
using std::endl;

int main()
{
	BinaryTree bTree;
	bTree.addNode(30);

	bTree.addNode(20);
	bTree.addNode(10);
	// bTree.addNode(10);
	bTree.addNode(400);
	// cout << bTree.getRoot().key <<endl;
	// bTree.preOrdem();
	bTree.findNode(10);
	return 0;
}