#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];


	//   Here   (1<<n) is 2^n
	for (int i = 0; i < (1 << n); i++) {
		for (int j = 0; j < n; j++) {
			// CHECK IF Jth BIT IS SET OR NOT
			if (i & (1 << j)) cout << a[j] << " ";
		}
		cout << "\n";
	}


	return 0;
}