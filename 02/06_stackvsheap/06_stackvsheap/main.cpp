#include <iostream>
#include <string>
#include <list>

int main() {
	int* pNumber = new int(10);
	int number = 10;

	std::cout << "Valor en el Heap: " << "\n";
	std::cout << pNumber << std::endl;
	std::cout << "Addres-of operator (dirección en memoria): " <<  & pNumber << "\n";
	std::cout << "Deference operator (valor actual de dirección en memoria: " << * pNumber << "\n";

	std::cout << "\nValor en el Stack: " << "\n";
	std::cout << number << "\n";
	std::cout << "Addres-of operator (dirección en memoria): " << &number << "\n";
}