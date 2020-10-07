// submitted at 2018.07.30 16:38:19
#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) 
			cout << '*';
		cout << endl;
	}
	return 0;
}