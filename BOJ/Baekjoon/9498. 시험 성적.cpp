// submitted at 2018.07.30. 18:35:37
#include <iostream>
using namespace std;

void print(char a);

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a;
	cin >> a;
	switch (a / 10) {
	case10:
	case 9:
		print('A');
		break;
	case 8:
		print('B');
		break;
	case 7:
		print('C');
		break;
	case 6:
		print('D');
		break;
	default:
		print('F');
	}

	return 0;
}

void print(char a) {
	cout << a << '\n';
}