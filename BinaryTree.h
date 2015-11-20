#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_
#include "Node.h"

class BinaryTree{
public:
	Node *root;
	BinaryTree();
	~BinaryTree();
	bool findNode(int key);
	bool addNode(int key);
	bool rmNode(int key);
	void preOrdem();

private:
	bool findNodeAux(int key, Node *r);
	bool addNodeAux(int key, Node **r);
	bool rmNodeAux(int key, Node **r);
	void preOrdemAux(Node *r);

};


#endif