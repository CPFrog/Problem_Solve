#include <iostream>
#include <string>
using namespace std;

int c[10][10];
int a[10];
int n;

bool check(int index) {
	int sum = 0;
	for (int i = index; i > -1; i--) {
		sum += a[i];
		if (c[i][index] == 0) {
			if (sum != 0)
				return false;
		}
		else if (c[i][index] == 1) {
			if (sum <= 0)
				return false;
		}
		if (c[i][index] == -1) {
			if (sum >= 0)
				return false;
		}
	}
	return true;
}

bool func(int index) {
	if (index == n) return true;
	if (c[index][index] == 0) {
		a[index] = 0;
		return (check(index) && func(index + 1));
	}
	for (int i = 1; i <= 10; i++) {
		a[index] = c[index][index] * i;
		if (check(index) && func(index + 1)) return true;
	}
	return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> n >> s;
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			switch (s.at(k)) {
			case '0':
				c[i][j] = 0;
				break;
			case '-':
				c[i][j] = -1;
				break;
			case '+':
				c[i][j] = 1;
			}
			k++;
		}
	}
	func(0);
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << '\n';
	return 0;
}