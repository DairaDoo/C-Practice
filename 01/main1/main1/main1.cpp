// main1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

std::string DevolverNumero(int valor1, int valor2) {
	
	if (valor1 > valor2) {
		return "El primer valor es mayor";
	}
	else if (valor2 > valor1) {
		return "El segundo valor es mayor";
	}
	else {
		return "Ambos valores son iguales";
	}

}

std::string returnSum() {
	int x{ 0 }, y{ 0 };

	std::cout << "\nEnter the first number:\n";
    std::cin >> x;

    std::cout << "Enter the second number: ";
    std::cin >> y;

    int result = x + y;

    return "The result of the sum of the two values is: " + std::to_string(result);
}

int main()
{

	std::string nombre;
	
	std::cout << "Ingrese su nombre: ";
	std::cin >> nombre;

	std::cout << "Saludos: " << nombre;

	cout << returnSum();
	

	return 0;

}

