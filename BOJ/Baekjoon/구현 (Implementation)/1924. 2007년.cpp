#include <iostream>
#include <string>
using namespace std;

void print(string s);

int main() {
	int days[11] = { 31,28,30,31,30,31,31,30,31,30 };
	int m, d;
	cin >> m >> d;

	if (m>1) {
		for (int i = 0; i < m - 1; i++)
			d += days[i];
	}

	switch (d % 7) {
	case 0:
		print("SUN");
		break;
	case 1:
		print("MON");
		break;
	case 2:
		print("TUE");
		break;
	case 3:
		print("WED");
		break;
	case 4:
		print("THU");
		break;
	case 5:
		print("FRI");
		break;
	case 6:
		print("SAT");
		break;
	}
	return 0;
}

void print(string s) {
	cout << s << endl;
}