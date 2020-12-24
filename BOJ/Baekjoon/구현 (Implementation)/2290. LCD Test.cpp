#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> v[23];

void lcd(char c, int s) {
	switch (c) {
	case '1':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++)
					v[k].push_back(' ');
			}
			else {
				for (int i = 0; i < s + 3; i++) {
					if (i == s + 1)
						v[k].push_back('|');
					else
						v[k].push_back(' ');
				}
			}
		}
		break;
	case '2':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++)
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
			}
			else {
				if (k <= s) {
					for (int i = 0; i < s + 3; i++) {
						if (i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
			}
		}
		break;
	case '3':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++) {
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
				}
			}
			else {
				for (int i = 0; i < s + 3; i++) {
					if (i == s + 1)
						v[k].push_back('|');
					else
						v[k].push_back(' ');
				}
			}
		}
		break;
	case '4':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				if (k == s + 1) {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0 || i > s)
							v[k].push_back(' ');
						else
							v[k].push_back('-');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++)
						v[k].push_back(' ');
				}
			}
			else {
				if (k > s + 1) {
					for (int i = 0; i < s + 3; i++) {
						if (i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0 || i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
			}
		}
		break;
	case '5':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++)
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
			}
			else {
				if (k > s) {
					for (int i = 0; i < s + 3; i++) {
						if (i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
			}
		}
		break;
	case '6':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++)
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
			}
			else {
				if (k > s) {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0 || i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
			}
		}
		break;
	case '7':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k == 0) {
				for (int i = 0; i < s + 3; i++)
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
			}
			else if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++)
					v[k].push_back(' ');
			}
			else {
				for (int i = 0; i < s + 3; i++) {
					if (i == s + 1)
						v[k].push_back('|');
					else
						v[k].push_back(' ');
				}
			}
		}
		break;
	case '8':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++) {
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
				}
			}
			else {
				for (int i = 0; i < s + 3; i++) {
					if (i == 0 || i == s + 1)
						v[k].push_back('|');
					else
						v[k].push_back(' ');
				}
			}
		}
		break;
	case '9':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				for (int i = 0; i < s + 3; i++) {
					if (i == 0 || i > s)
						v[k].push_back(' ');
					else
						v[k].push_back('-');
				}
			}
			else {
				if (k <= s) {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0 || i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++) {
						if (i == s + 1)
							v[k].push_back('|');
						else
							v[k].push_back(' ');
					}
				}
			}
		}
		break;
	case '0':
		for (int k = 0; k < 2 * s + 3; k++) {
			if (k % (s + 1) == 0) {
				if (k != s + 1) {
					for (int i = 0; i < s + 3; i++) {
						if (i == 0 || i > s)
							v[k].push_back(' ');
						else
							v[k].push_back('-');
					}
				}
				else {
					for (int i = 0; i < s + 3; i++)
						v[k].push_back(' ');
				}
			}
			else {
				for (int i = 0; i < s + 3; i++) {
					if (i == 0 || i == s + 1)
						v[k].push_back('|');
					else
						v[k].push_back(' ');
				}
			}
		}
		break;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int s;
	string n;
	cin >> s >> n;
	int l = n.length();

	for (int a = 0; a < l; a++)
		lcd(n[a], s);
	int vl = v[0].size();
	for (int i = 0; i < 2 * s + 3; i++) {
		for (int j = 0; j < vl; j++)
			cout << v[i].at(j);
		cout << '\n';
	}
	return 0;
}