#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Node {
	T value;
	Node<T>* right = nullptr;
	Node<T>* left = nullptr;
};

template <typename T>
class BinaryTree {
	Node<T>* root = nullptr;
	int count = 0;

	void showAll(Node<T>* el) {
		cout << el->value << " ";
		if (el->left != nullptr) showAll(el->left);
		if (el->right != nullptr) showAll(el->right);
	}

public:
	void push(T value) {
		Node<T>* newNode = new Node<T> {value};
		if (root == nullptr) {
			root = newNode;
			count++;
			return;
		}
		Node<T>* buf = root;
		while (true) {
			if (value > buf->value) {
				if (buf->right == nullptr){
					buf->right = newNode;
					break;
				}
				buf = buf->right;
			}
			else{
				if (buf->left == nullptr) {
					buf->left = newNode;
					break;
				}
				buf = buf->left;
			}
		}
		count++;
	}
	void show() {
		if (root != nullptr) showAll(root);
	}
};