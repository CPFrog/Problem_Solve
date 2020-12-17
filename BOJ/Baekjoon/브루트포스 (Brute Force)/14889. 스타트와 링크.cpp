#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int half = n / 2;
	int score[n][n];
	int team[n];

	for (int i = 0; i < n; i++) {
		if (i < half)
			team[i] = 0;
		else
			team[i] = 1;
		for (int j = 0; j < n; j++)
			cin >> score[i][j];
	}

	int min = 2147483647;

	do {
		vector<int> v[2];
		int ability[2] = { 0,0 };
		for (int i = 0; i < n; i++) {
			if (team[i] == 0)
				v[0].push_back(i);
			else
				v[1].push_back(i);
			for (int j = v[team[i]].size() - 1; j >= 0; j--) {
				ability[team[i]] += score[v[team[i]].back()][v[team[i]].at(j)];
				ability[team[i]] += score[v[team[i]].at(j)][v[team[i]].back()];
			}
		}
		int dif = abs(ability[0] - ability[1]);
		if (min > dif) min = dif;
	} while (next_permutation(team, team + n));
	cout << min << '\n';
	return 0;
}