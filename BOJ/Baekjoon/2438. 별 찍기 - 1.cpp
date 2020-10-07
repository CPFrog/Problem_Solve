// submitted at 2018.07.30. 16:25:28
#include <iostream>
using namespace std;

int main() {
	int rep;
	cin >> rep;

	for (int i = 0; i < rep; i++) {
		for (int j = 0; j <= i; j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}