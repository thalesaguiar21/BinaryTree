#ifndef _NODE_H_
#define _NODE_H_

class Node{
public:
	int key;
	Node *left;
	Node *right;

public:
	Node(int newKey);
	~Node();
};


#endif