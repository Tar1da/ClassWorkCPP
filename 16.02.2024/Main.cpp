#include <iostream>
using namespace std;
#include "Header.h"
int main() {
	int arr[]{50, 27, 64, 69, 18, 31, 42, 80, 57};
	BinaryTree<int> tree;
	for (int k = 0; k < 9; k++)
		tree.push(arr[k]);

	tree.show();

	system("pause");
	return 0;
}