#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main(){

	int q, ans = 0;
	long long int n;

	scanf("%d", &q);

	while(q--)
	{
		scanf("%lld", &n);

		if(n < 4)
			ans = 4-n;
		else
			ans = (int)(n & 1);
		printf("%d\n", ans);
	}
}