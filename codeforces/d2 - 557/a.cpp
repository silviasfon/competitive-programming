// https://codeforces.com/contest/1162/problem/A

#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define mp make_pair
#define pb push_back
#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,int> > vii;

int main(){

	int n, h, m, l, r, x, total = 0;
	int houses[55];

	scanf("%d %d %d", &n, &h, &m);

	memset(houses, INF, sizeof houses);

	for(int i = 0; i < m; i++){
		scanf("%d %d %d", &l, &r, &x);
		for(int j = l; j<=r; j++){
			houses[j] = min(x, houses[j]);
		}
	}

	for(int i = 1; i <= n; i++){
		if(houses[i] != INF)
			total += (houses[i]*houses[i]);
		else
			total += (h*h);
	}

	printf("%d\n", total);

	return 0;
}
