#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned long long ll;

struct Game {
	int name, cost, rate;
};

bool cmp(const Game& a, const Game& b) {
	if ((a.rate / a.cost) == (b.rate / b.cost)) {
		ll ar = a.rate * b.cost, br = b.rate * a.cost;
		if (ar == br) {
			if (a.cost == b.cost)
				return a.name < b.name;
			else return a.cost < b.cost;
		}
		else return ar > br;
	}
	else return (a.rate / a.cost) > (b.rate / b.cost);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<Game> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].name >> v[i].cost >> v[i].rate;

	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < k; i++)
		cout << v[i].name << '\n';

	return 0;
}