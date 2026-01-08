#include <iostream>
#include <vector>
#include <string>

int main()
{
	int lista[5]{ 1, 2, 3, 4, 5 };

	lista[0] = 20;
	std::cout << lista[0];

	for (int numero : lista) {
		std::cout << "Elementos en la lista: " << numero << "\n";
	}

	std::cout << "\nPrimer elemento direccion de memoria: " << &lista[0] << std::endl;

	std::cout << "Tamano del array: " << sizeof(lista) / sizeof(lista[0]);

}

