#include <iostream>
#include <vector>
#include <string>
using namespace std;

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

int func(vector<string>& arr, vector<bool>& check, int x, int y) {
	int max = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < arr.size() && ny >= 0 && ny < arr[0].size()) {
			if (check[arr[nx][ny] - 'A'] == false) {
				check[arr[nx][ny] - 'A'] = true;
				int ans = func(arr, check, nx, ny);
				if (ans > max) max = ans;
				check[arr[nx][ny] - 'A'] = false;
			}
		}
	}
	return max + 1;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int r, c;
	cin >> r >> c;

	vector<string> arr(r);
	for (int i = 0; i < r; i++)
		cin >> arr[i];
	vector<bool> check(26);
	check[arr[0][0] - 'A'] = true;
	cout << func(arr, check, 0, 0) << '\n';
	return 0;
}