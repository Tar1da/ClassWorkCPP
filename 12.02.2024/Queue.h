#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Queue
{
private:
	T* queue = nullptr;
	int count = 0;
	int capacity;
public:
	Queue(int capacity) {
		this->capacity = capacity;
		queue = new T[capacity];
	}
	
	~Queue() {
		if (queue != nullptr) {
			delete[] queue;
			count = 0;
		}
	}

	Queue(Queue gu) {
		this->count = qu.count;
		this->capacity = qu.capasity;
		if (queue != nullptr) delete[] queue;
		for (int k = 0; k < count; k++) queue[k] = qu.queue[k];
	}
	
	void operator=(Queue qu) {
		this->count = qu.count;
		this->capacity = qu.capasity;
		auto buf = new T[capacity];
		for (int k = 0; k < count; k++) buf[k] = queue[k];
		if (this->queue != nullptr) delete[] queue;
		this->queue = buf;
	}
	
	void addEl(int el)
	{
		auto buf = new int[count + 1];
		for (int k = 0; k < count + 1; k++) buf[k] = queue[k];
		buf[count] = el;
		delete[] queue;
		queue = buf;
		count++;
	}

	void removeEl(int index)
	{
		auto buf = new int[count - 1];
		for (int k = 0; k < index; k++) buf[k] = queue[k];
		for (int k = index; k < count - 1; k++) buf[]
	}

	bool empty() {
		return !count;
	}
	
	void push(T el) {
		if (count >= capacity) return;
		queue[count++] = el;
	}
	
	T pop() {
		if (count <= 0) return NULL;
		T buf = queue[0];
		for (int k = 0; k < count - 1; k++) queue[k] = queue[k + 1];
	}
	
	T front() {
		return queue[0];
	}
	
	T back() {
		return queue[count - 1];
	}

	T size() {
		return count;
	}

	void push_range(Queue qu) {
		if ((this->count + qu.count) > capacity) return;
		for (int k = count, n = 0; k < qu.count; k++, n++) queue[k] = qu.queue[n];
	}
};

