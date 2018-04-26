#include <iostream>
#include <string>
using namespace std;

int main() {
	char next = "y";

	while (next != "n") {
		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit list (x)" << endl;
		cout << "What do you want to do: ";
		cin >> next;



		switch (next) {
		case 'a':   
			break;
		case 'd':  
			break;
		case 'p':  
			break;
		case'x':   
			break;

		}
	}
}
