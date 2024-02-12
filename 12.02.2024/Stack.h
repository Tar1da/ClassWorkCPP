#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
	T* stack = nullptr;
	int size = 0;
	int capacity;
public:
	Stack(int capacity)
	{
		stack = new T[capacity]
			this->capacity = capacity;
	}

	~Stack()
	{
		if (stack != nullptr) {
			delete[] stack;
			size = 0;
		}
	}

	void operator=(Stack& stack)
	{
		this->size = stack.size;
		this->capacity = stack.capacity;
		auto buf = new T[capacity];
		for (int k = 0; k < size; k++) buf[k] = stack.arr[k];
		if (this->stack != nullptr) delete[] stack;
		this->stack = buf;
	}

	bool empty()
	{
		return !size;
	}

	int size()
	{
		return this->size;
	}

	T top()
	{
		return stack[size - 1];
	}

	void push(T el) {
		if (size >= capacity) return;
		stack[size++] = el;
	}

	T pop() {
		if (size == 0) return NULL;
		count--;
		return stack[count];
	}

	void addElement(int element)
	{
		auto buf = new int[size + 1];
		for (int k = 0; k < size + 1; k++) buf[k] = stack[k];
		buf[size] = element;
		delete[] stack;
		stack = buf;
		size++;
	}

	void removeElement(int index)
	{
		auto buf = new int[size - 1];
		for (int k = 0; k < index; k++) buf[k] = stack[k];
		for (int k = index; k < size - 1; k++) buf[]
	}

	template<typename T>
	void Stack<T>::showStack()
	{
		while (!stack.empty()) cout << stack.pop();
	}
}