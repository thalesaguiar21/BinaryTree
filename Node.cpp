#include <iostream>
#include "Node.h"

Node::Node(int newKey){
	this->key = newKey;
	this->left = NULL;
	this->right = NULL;
}

Node::~Node(){
	if(this->left != NULL)
		delete this->left;
	if(this->right != NULL)
		delete this->right;
}