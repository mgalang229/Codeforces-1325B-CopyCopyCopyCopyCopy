#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, x;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for(int i = 0; i <= n - 1; ++i) {
		if(v[i] != v[i + 1]) {
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
