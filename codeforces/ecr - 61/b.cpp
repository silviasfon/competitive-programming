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

	int n, m, k;
	long long unsigned int total=0, ans = 0;
	vector<int> a, q;

	scanf("%d", &n);
	fori(i, n){
		scanf("%d", &k);
		a.pb(k);
		total+=k;
	}

	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		scanf("%d", &k);
		q.pb(k);
	}

	sort(a.begin(), a.end());

	for(int i = 0; i < q.size(); i++){
		ans = total - a[a.size() - q[i]];
		printf("%llu\n", ans);
	}

	return 0;
}