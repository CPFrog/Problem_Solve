#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int h1, h2, h3, coke, cider, set;
	cin >> h1 >> h2 >> h3 >> coke >> cider;
	set = min(h1, min(h2, h3)) + min(coke, cider) - 50;
	cout << set << '\n';
	return 0;
}