#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction(int i, int j) { return (i > j); }

int main() {
	const int n = 10;
	int myints[n] = {};

	cout << "Please, enter array with 10 elements:" << endl;

	for (int i = 0; i < n; i++) cin >> myints[i];

	vector<int> myvector(myints, myints + 8);

	sort(myvector.begin(), myvector.end(), myfunction);

	cout << "Sort array:" << endl;

	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << *it << ' ';
	cin.get(); return 0;
}

//Сортировка массива с 10 элементами