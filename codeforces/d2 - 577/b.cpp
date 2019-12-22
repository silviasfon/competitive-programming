// https://codeforces.com/contest/1201/problem/B

#include <bits/stdc++.h>

#define MAXN 105

using namespace std;

int main()
{
	int n, maior = 0, k;
	long long int sum = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		sum+=k;
		maior = max(maior, k);
	}

	if(!(sum&1) && maior <= (sum+1)/2)
		printf("YES\n");
	else
		printf("NO\n");
}
