#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long extra = 0;
		for (int i = 0; i < n; i++) {
			// if a[i] is strictly greater than (i + 1), then we need to add elements before it
			// until (i + 1) is equal to a[i] (basically, the difference of a[i] and (i + 1))
			// note: don't forget to update the (i + 1)-th positions (by adding the no. of elements added)
			if (a[i] > (i + 1)) {
				extra += (max(0LL, a[i] - (i * 1LL + 1 + extra)));
			}
		}
		cout << extra << '\n';
	}
	return 0;
}
