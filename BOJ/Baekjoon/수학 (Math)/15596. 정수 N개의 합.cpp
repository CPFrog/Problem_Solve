#include <vector>

long long sum(std::vector<int>& a) {
	long long ans = 0;
	int l = a.size();
	for (int i = 0; i < l; i++)
		ans += a[i];
	return ans;
}