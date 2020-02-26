#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{

	long long unsigned int t, x, y;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld %lld", &x, &y);
		if(x-y == (long long)1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
