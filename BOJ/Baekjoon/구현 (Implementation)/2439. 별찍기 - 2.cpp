#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	int a = input;
	while (a--) {
		for (int i = a; i > 0; i--)
			cout << ' ';
		for (int b = a; b < input; b++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}