#include <iostream>
#include "BinaryTree.h"
using std::cout;
using std::endl;

BinaryTree::BinaryTree(){
	this->root = NULL;
}
// BinaryTree::~BinaryTree(){
// 	delete this->root;
// }

Node BinaryTree::getRoot(){
	if(root != NULL){
		return *root;
	}
	cout << "Árvore vazia.\n"; 
	return NULL;
}

// ################# Busca ########################
void BinaryTree::findNode(int key){
	if(root == NULL){
		cout << "ERRO! A árvore está vazia.\n";
	}
	else
		findNodeAux(key, *root);
}

void BinaryTree::findNodeAux(int key, Node &r){
	if(key == r.key){
		cout << "Nó encontrado\n";
	}
	else if(key < r.key){
		if(r.left == NULL)
			cout << "O nó não foi encontrado.\n";
		else
			findNodeAux(key, *(r.left));
	}
	else{
		if(r.right == NULL)
			cout << "O nó não foi encontrado.\n";
		else
			findNodeAux(key, *(r.right));
	}
}

// ################# Inserção ######################
void BinaryTree::addNode(int key){
	if(root == NULL){
		root = new Node(key);
	}
	else
		addNodeAux(key, *root);
}

void BinaryTree::addNodeAux(int key, Node &r){
	if(key < r.key){
		if(r.left == NULL){
			r.left = new Node(key);
		}
		else
			addNodeAux(key, *(r.left));
	}
	else if(key > r.key){
		if(r.right == NULL){
			r.right = new Node(key);
		}
		else
			addNodeAux(key, *(r.right));
	}
	else
		cout << "ERRO!O nó " << key << " já foi inserido.\n";
}


// ################# Pré-Ordem ########################
void BinaryTree::preOrdem(){
	if(root != NULL){
		preOrdemAux(*root);
	}
}

void BinaryTree::preOrdemAux(Node &r){
		cout << r.key <<endl;
		if(r.left != NULL)
			preOrdemAux(*(r.left));
		if(r.right != NULL)
			preOrdemAux(*(r.right));
}
