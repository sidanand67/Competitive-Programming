#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left, *right;

	node(int d) {
		this->data = d;
		left = NULL;
		right = NULL;
	}
};

// recursive function to insert value in binary search tree
node* construct(node* root, int data) {

	// base case: root is NULL
	if (root == NULL) {
		node* root = new node(data);
		return root;
	}

	// insert in right subtree if data is greater than root's data
	if (data > root->data) {
		root->right = construct(root->right, data);
	}

	// inert in left subtree if data is smaller than root's data
	else {
		root->left = construct(root->left, data);
	}

	return root;
}

// iterative function to insert value in binary search tree
node* constructIteratively(node* root, int data) {

	// this node is to be inerted in the tree
	node* q = new node(data);
	if (root == NULL) {
		return q;
	}

	// pointer to traverse from root to downward path
	// to search where the node is to be inserted
	node* p = root;

	while (true) {

		if (data < p->data) {

			// insert node here if p->left is NULL
			if (p->left == NULL) {
				p->left = q;
				break;
			}

			// traverse in the left subtree
			p = p->left;
		}
		else {

			// insert node here is p->right is NULL
			if (p->right == NULL) {
				p->right = q;
				break;
			}

			// traverse in the right subtree
			p = p->right;
		}
	}
	return root;
}

// function to build binary search tree
node* buildTree() {

	int data;
	cin >> data;

	node* root = NULL;

	// take inputs till user inputs -1
	while (data != -1) {

		// pass the input value to the function to insert
		// it in the tree
		root = constructIteratively(root, data);
		cin >> data;
	}

	return root;
}

int main() {

	node *root = buildTree();

	return 0;
}