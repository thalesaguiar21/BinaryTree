#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_
#include "Node.h"

class BinaryTree{
public:
	Node getRoot();
	BinaryTree();
	// ~BinaryTree();
	void addNode(int key);
	void findNode(int key);
	void rmNode(int key);
	void preOrdem();

private:
	Node *root;
	void addNodeAux(int key, Node &r);
	void findNodeAux(int key, Node &r);
	void rmNodeAux(int key, Node &r);
	void preOrdemAux(Node &r);
};


#endif