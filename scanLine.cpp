#include<bits/stdc++.h>
#include<cstring>
using namespace std;


#define pb emplace_back
#define int long long

void scanline(int *a, int n) {
	int t;
	cin >> t;

	while (t--) {
		int l, r, x;
		cin >> l >> r >> x;

		a[l] += x;
		a[r + 1] -= x;
	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
		cout << sum << " ";
	}
	return;
}


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) a[i] = 0;
	scanline(a, n);
	return 0;
}