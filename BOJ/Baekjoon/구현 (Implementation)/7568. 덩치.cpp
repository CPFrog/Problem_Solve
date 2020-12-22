#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v;
	int rank[n];

	for (int i = 0; i < n; i++) {
		int w, h;
		cin >> w >> h;
		v.push_back(make_pair(w, h));
		rank[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i].first > v[j].first && v[i].second > v[j].second)
				rank++;
		}
	}
	for (int i = 0; i < n; i++) 
		cout << rank[i] << ' ';
	cout << '\n';
	return 0;
}