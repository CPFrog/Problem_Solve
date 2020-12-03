#include <iostream>
using namespace std;

int gec(int a, int b) {
	if (b == 0) return a;
	else return gec(b, a % b);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	int g, l;
	g = gec(a, b);
	l = a * b / g;
	cout << g << '\n' << l << '\n';
	return 0;
}