#include <iostream>
#include "BinaryTree.h"
using std::cout;
using std::endl;

BinaryTree::BinaryTree(){
	this->root = NULL;
}
BinaryTree::~BinaryTree(){
	delete this->root;
}

// Funções visíveis
bool BinaryTree::findNode(int key){
	bool result = findNodeAux(key, this->root);
	return result;
}

bool BinaryTree::addNode(int key){
	bool result = addNodeAux(key, &(this->root));
	return true;
}

bool BinaryTree::rmNode(int key){
	rmNodeAux(key, &(this->root));
	return true;
}

void BinaryTree::preOrdem(){
	preOrdemAux(this->root);
}

// Funções auxiliares
bool BinaryTree::findNodeAux(int key, Node *r){
	if(r != NULL){
		if(key == r->key){
			return true;
		}
		else if(key < r->key){
			r = r->left;
			return findNodeAux(key, r);
		}
		else{
			r = r->right;
			return findNodeAux(key, r);
		}
	}
	return false;
}

bool BinaryTree::addNodeAux(int key, Node **r){
	if(*r == NULL){
		*r = new Node(key);
		return true;
	}
	else{
		if(key == (*r)->key)
			return false;
		else if(key < (*r)->key){
			r = &((*r)->left);
			return addNodeAux(key, r);
		}
		else{
			r = &((*r)->right);
			return addNodeAux(key, r);
		}
	}
	return false;
}

bool BinaryTree::rmNodeAux(int key, Node **r){
	if(*r != NULL){
		if(key == (*r)->key){
			if((*r)->left == NULL && (*r)->right == NULL)
				delete *r;
		}
		else if(key < (*r)->key){
			r = &((*r)->left);
			rmNodeAux(key, r);
		}
		else{
			r = &((*r)->right);
			rmNodeAux(key, r);
		}
	}
	return true;
}

void BinaryTree::preOrdemAux(Node *r){
	if(r != NULL){
		cout << r->key <<endl;
		preOrdemAux(r->left);
		preOrdemAux(r->right);
	}
}
