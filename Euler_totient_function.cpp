#include<bits/stdc++.h>
#include<cstring>
using namespace std;


#define pb emplace_back
#define arrIn(a,n) vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
#define pb emplace_back


// If n is prime .
// phi(n) = n-1
// phi(p^n) = p^n - p^(n-1);



int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int n;
	cin >> n;

	unordered_map<int, int> primeFactors;

	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			primeFactors[i]++;
			n = n / i;
		}
	}

	if (n > 1) primeFactors[n]++;


	int ans = 1;

	for (auto it : primeFactors) {
		ans = ans * (pow(it.first, it.second) - pow(it.first, it.second - 1));
	}
	cout << ans;

	return 0;
}


// TIME COMPLEXITY

// O(sqrt(n)) + O(log n * log n)
// O(sqrt(n) + O(sqrt(n)))
// O(2*sqrt(n));

// OR

//phi(n) = n*pi * (1 - (1/p))
// WHERE P IS ALL THE PRIMES

