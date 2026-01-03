#include <iostream>

using namespace std;

int count = 10; // global variable

int main()
{

	int count = 20; // local, sobreescribe la global.

	cout << "Local count: " << count << endl;
	cout << "Global count: " << ::count << endl;

	return 0;
}


//void PointersExercise() {
//	int* pPtr = new int(10);
//
//	cout << "Dirección: " << pPtr << endl;
//
//	cout << "Valor en memoria:" << *pPtr;
//
//	delete(pPtr);
//}
//
