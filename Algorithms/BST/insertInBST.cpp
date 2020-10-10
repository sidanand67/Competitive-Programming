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

node* construct(node* root, int data) {
	if (root == NULL) {
		node* root = new node(data);
		return root;
	}

	if (data > root->data) {
		root->right = construct(root->right, data);
	} else {
		root->left = construct(root->left, data);
	}

	return root;
}

node* constructIteratively(node* root, int data) {
	node* q = new node(data);
	if (root == NULL) {
		return q;
	}
	node* p = root;
	while (true) {
		if (data < p->data) {
			if (p->left == NULL) {
				p->left = q;
				break;
			}
			p = p->left;
		} else {
			if (p->right == NULL) {
				p->right = q;
				break;
			}
			p = p->right;
		}
	}
	return root;
}

node* buildTree() {

	int data;
	cin >> data;

	node* root = NULL;

	while (data != -1) {
		root = constructIteratively(root, data);
		cin >> data;
	}

	return root;
}

int main() {

	node *root = buildTree();

	return 0;
}