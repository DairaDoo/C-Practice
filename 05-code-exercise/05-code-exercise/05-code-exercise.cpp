#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {

	bool keep_using_browser = true;
	list<string> browser_history;
	int option;

	while (keep_using_browser) {
		cout << "\nWelcome to C++ Browser\n";
		cout << "1. Visit web page\n";
		cout << "2. Exit\n";
		cout << "3. Check Browser History\n";
		cout << "Insert option here: ";
		cin >> option;

		if (option == 1) {
			string web_page_name;
			cout << "Enter the name of the web page: ";
			cin >> web_page_name;

			bool found = false;

			for (auto it = browser_history.begin(); it != browser_history.end();  ++it) {
				if (*it == web_page_name) {
					browser_history.splice(browser_history.begin(), browser_history, it);
					found = true;
					cout << "Tab exists! Move to front.\n";
					break;
				}
			}

			if (!found) {
				browser_history.push_front(web_page_name);
				cout << "New tab added.\n";
			}
		}
		else if (option == 2) {
			break;
		}

		else if (option == 3) {
			cout << "Browser history:\n";
			for (const string& page : browser_history) {
				cout << "- " << page << endl;
			}
		}
		else {
			cout << "Invalid Input";
		}
	}

	return 0;

}