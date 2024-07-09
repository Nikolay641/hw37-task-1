#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class MyQueue {
	vector<T> arr;
public:
	bool isEmpty()const {
		return arr.empty();
	};
	T first()const {
		if (isEmpty()) { throw "Queue is empty\n"; }
		return arr[0];
	};
	void push(T value) {
		arr.push_back(value);
	};
	void pop() {
		if (isEmpty()) { throw "Queue is empty\n"; }
		arr.erase(arr.begin());
	};
	void show()const {
		for (T item : arr) {
			cout << item << " ";
		}
		cout << endl;
	};
};