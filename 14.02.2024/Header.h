#pragma once
#include <iostream>
template <typename T>
struct Node {
	T value;
	Node <T>* next;
};

template <typename T>
class LinkedList {
	Node <T>* head = nullptr;
	int count = 0;
public:
	void push(T value) {
		Node <T>* newNode = new Node <T>{ value, head };
		head = newNode;
		count++;
 	}
	void showAll() {
		Node <T>* buf = head;
		while (buf->next != nullptr) {
			cout << buf->value << " ";
			buf = buf->next;
		}
		cout << buf->value;
	}
	void insert(T value, int index) {
		if (index >= count || index < 0) return;
		if (index == 0) {
			push(value); 
			return; 
		}
		Node <T>* buf = head;
		for (int k = 0; k < index - 1; k++) buf = buf->next;
		Node <T>* newNode = new Node <T>{ value, buf->next };
		buf->next = newNode;
		count++;
	}
	void dropHead(){
		if (count == 0) return;
		Node <T>* buf = head;
		head = head->next;
		count--;
		delete[] buf;
	}
	void dropEl(int index) {
		if (count == 0) return;
		if (count == 1){
			dropHead();
			return;
		}
		Node <T>* buf = head;
		for (int k = 0; k < index - 1; k++) buf = buf->next;
		Node <T>* remEl = buf->next;
		buf->next = buf->next->next;
		delete[] remEl;
		count--;
	}
};