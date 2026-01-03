#include <iostream>
#include <string>
#include <list>

class Emp {
public:
	int id;
	std::string emp_name;


	// constructor
	Emp(int id, std::string emp_name) {
		this->id = id;
		this->emp_name = emp_name;
	}

	void SaludaEmpleado() {
		std::cout << "Hey Employee!";
	}

};

Emp Emp_detail(int id, std::string emp_name) {
	return Emp(id, emp_name);
}



int main() {

	// datos que se guardan en el Stack.
	//int a;
	//int b[10];
	//int n = 20;

	//// datos que se guardan en el Heap
	//// memoria para 10 enteros
	//int* ptr = new int[10];


	//int id = 21;
	//std::string name = "Juan";

	//Emp person_ = Emp_detail(id, name);
	//person_.SaludaEmpleado();


	return 0;
}
