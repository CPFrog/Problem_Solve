#include <iostream>

int main() {
	int a, b;
	double res;
	std::cin >> a >> b;
	res = (double)a / (double)b;

	std::cout.precision(10);
	std::cout << res << std::endl;
	return 0;
}