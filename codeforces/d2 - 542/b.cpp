// https://codeforces.com/contest/1130/problem/B

#include<bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;
typedef long long ll;

int main(){

	int n, k, ps = 0, pd =0, x, y;
	long long dd = 0, ds=0;
	int a[100005][2] = {0};

	scanf("%d", &n);

	for (int i = 0; i < 2*n; i++){
		scanf("%d", &k);
		if(a[k][0]!=0)
			a[k][1] = i;
		else
			a[k][0] = i;
	}

	ps = a[1][0]; ds = a[1][0];
	pd = a[1][1]; dd = a[1][1];

	for(int i = 2; i <= n; i++) {
		x = min(a[i][0], a[i][1]);
		y = max(a[i][0], a[i][1]);
		if(ps < pd){
			ds += (long long)abs(x-ps); ps = x;
			dd += (long long)abs(y-pd); pd = y;
		} else {
			ds += (long long)abs(y-ps); ps = y;
			dd += (long long)abs(x-pd); pd = x;
		}
	}

	printf("%lld\n", ds+dd);

	return 0;
}
