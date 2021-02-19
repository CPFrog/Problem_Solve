#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Team {
	string name;
	vector<string> member;
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<Team> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].name;
		int num;
		cin >> num;
		while (num--) {
			string mname;
			cin >> mname;
			v[i].member.push_back(mname);
		}
		sort(v[i].member.begin(), v[i].member.end());
	}
	while (m--) {
		string s;
		int qtype;
		cin >> s >> qtype;
		if (qtype) {
			for (int i = 0; i < n; i++) {
				for (string mname : v[i].member) {
					if (mname == s) {
						coutt << v[i].name << '\n';
						goto NEXT;
					}
				}
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				if (s == v[i].name) {
					for (string mname : v[i].member)
						cout << mname << '\n';
					break;
				}
			}
		}
	NEXT:continue;
	}
	return 0;
}