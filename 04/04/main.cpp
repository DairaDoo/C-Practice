#include <iostream>;
#include <string>;
#include <list>;

using namespace std;

int main() {
	list<string> Pestanas = { "Google", "StackOverflow", "Github", "Youtube" };

	auto itGithub = Pestanas.begin();
	advance(itGithub, 2);

	auto itBorrar = itGithub;
	itBorrar--;
	Pestanas.erase(itBorrar);

	auto itBorrarYoutube = Pestanas.end();
	itBorrarYoutube--;

	Pestanas.splice(Pestanas.begin(), Pestanas, itBorrarYoutube);

	for (auto elemento : Pestanas) {
		cout << elemento << endl;
	}

	cout << "Resultado de las pestañas: " << endl;
	for (const string p : Pestanas) {
		cout << "- " << p << endl;
	}

}