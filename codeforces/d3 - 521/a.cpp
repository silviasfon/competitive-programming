#include <bits/stdc++.h>

using namespace std;

int main(){


	int t;
	long long unsigned int a, b, k, ans = 0;

	scanf("%d", &t);

	while(t--){
		scanf("%lld %lld %lld", &a, &b, &k);

		ans = (k/2 + (k%2))*a;
		ans -= b*(k/2);

		printf("%lld\n", ans);
	}

	return 0;
}