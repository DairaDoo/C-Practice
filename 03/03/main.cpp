#include <iostream>
#include <list>
using namespace std;

int main() {

	list <int> myList = { 10, 20, 40 };

	auto it = myList.begin();

	it++;
	it++;

	myList.insert(it, 30);

	for (int n : myList) {
		cout << n << endl;
	}



	return 0;
}