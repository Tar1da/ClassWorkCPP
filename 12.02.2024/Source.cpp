#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack <int> stack(3);
	cout << "-----push 3 4 6 9 ---" << endl;
	stack.push(3);
	stack.push(4);
	stack.push(6);
	stack.push(9);
	system("pause");
	return 0;
 }