// 4_semak_5_task.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "cstdlib"
#include <iostream>
#include <vector>
#include "Tree.h"

int main()
{
	Tree* tree = new Tree(9);
	tree->output();
	cout << endl;

	tree->deleteLeaves();
	tree->output();
	cout << endl;
	
	tree->add(18, vector<int>());
	tree->output();
	cout << endl;
	
	vector<int> v;
	v.push_back(1);
	tree->add(19, v);
	tree->output();
	cout << endl;
	
	v.clear();
	v.push_back(0);
	tree->add(4, v);
	tree->output();
	cout << endl;

	cout << "Count even: " << tree->countOfEvenNumbers() << endl;
	cout << endl;

	cout << "Check all positive is: " << tree->allNumbersIsPositive() << endl;
	cout << endl;

	tree->add(-1, v);
	tree->output();
	cout << endl;

	cout << "Check all positive is: " << tree->allNumbersIsPositive() << endl;
	cout << endl;

	cout << "Arithmetic mean: " << tree->arithmeticMeanOfAllNumbers() << endl;
	cout << endl;

	cout << "find -1, path: ";
	std::vector<int> v2 = tree->lookAtElem(-1);
	for (int i = 0; i< v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}

