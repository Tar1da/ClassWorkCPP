#include <iostream>
using namespace std;
#include "Header.h"
int main() {

	LinkedList<int> list;
	for (int k = 0; k < 10; k++) list.push(k);

	list.showAll();
	list.insert(10, 1);
	cout << endl;
	list.showAll();
	list.dropEl(10);
	cout << endl;
	list.showAll();
	cout << endl;
	system("pause");
	return 0;
}