#include<bits/stdc++.h>
using namespace std;

// This Algorithm is used when // 

// QUESTION - You are given an array of n numbers. In how many ways can you choose a subset of the numbers with sum x?
// QUESTION LINK- https://cses.fi/problemset/task/1628


/*
  ALGO -
  1. Divide The algorithm into two parts 
  2. In one Part Apply Power Set and Store The Sum.
  3. Now in another part do the same Thing but store in a Map and Also store the frequency.
  4. Now itrate on Vector and get the count.
*/




#define int long long
#define push_back emplace_back

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sum;
	cin >> n >> sum;
	int a[n];

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n / 2; i++) {
		v1.push_back(a[i]);
	}

	for (int i = n / 2; i < n; i++) {
		v2.push_back(a[i]);
	}


	int n1 = v1.size();
	int n2 = v2.size();

	// APPLY POWER SET ON V1
	vector<int> sum1;

	for (int num = 0 ; num < (1 << n1); num++) {
		int s = 0;
		for (int i = 0; i < n1; i++) {
			if (num & (1 << i)) s += v1[i];
		}
		sum1.push_back(s);
	}

	unordered_map<int, int> m;

	for (int num = 0 ; num < (1 << n2); num++) {
		int s = 0;
		for (int i = 0; i < n2; i++) {
			if (num & (1 << i)) s += v2[i];
		}
		m[s]++;
	}


	int ans = 0;

	for (auto i : sum1) {
		int sumTofind = sum - i;
		if (m.count(sumTofind) == 1) ans += m[sumTofind];
	}

	cout << ans;



	return 0;
}
