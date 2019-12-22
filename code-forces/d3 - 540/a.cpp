#include <bits/stdc++.h>

using namespace std;

int main(){

	int q;
	long long n, a, b;

	scanf("%d", &q);

	while(q--){
		scanf("%lld %lld %lld", &n, &a, &b);

		printf("%lld\n", (a*2 <= b)?(a*n):(b*(n/2) + a*(n%2)));
	}
	
	return 0;
}

/*42000000000000
18446744073224364032*/