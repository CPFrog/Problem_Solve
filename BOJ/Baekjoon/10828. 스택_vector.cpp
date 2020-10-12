// submitted at 2018.07.30. 22:07:55
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> v;

void stk(string s) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int oc;
	cin >> oc;
	string o;

	for (int i = 0; i < oc; i++) {
		cin >> o;
		if (o == "push") {
			int oo;
			cin >> oo;
			v.push_back(oo);
		}
		else stk(o);
	}
	return 0;
}

void stk(string s) {
	if (s.compare("top") == 0) {
		if (v.empty()) cout << "-1" << '\n';
		else cout << v.back() << '\n';
	}
	else if (s.compare("pop") == 0) {
		if (v.empty()) cout << "-1" << '\n';
		else {
			cout << v.back() << '\n';
			v.pop_back();
		}
	}
	else if (s.compare("size") == 0) cout << v.size() << '\n';
	else cout << (v.empty() ? 1 : 0) << '\n';
}