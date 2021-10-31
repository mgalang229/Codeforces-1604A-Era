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
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			int k;
			cin >> k;
			// find the maximum difference between between the number and its i-th position because once 
			// we move this element, then all the other elements will be less than its i-th position
			ans = max(ans, k - i);
		}
		cout << ans << '\n';
	}
	return 0;
}
