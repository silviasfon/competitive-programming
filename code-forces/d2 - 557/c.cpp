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

vi pos[100005];

bool validate(int i, int j){

	for(auto x:pos[i]){
		for(auto y:pos[j]){
			if(x < y)
				return true;
		}
	}
	return false;
}

int main(){

	int n, k, x, total;

	scanf("%d %d", &n, &k);

	for(int i = 1; i <= k; i++){
		scanf("%d", &x);
		pos[x].push_back(i);
	}

	total = n*3 - 2;

	for(int i = 1; i <= n; i++){
		if(pos[i].size() > 0)
			total--;
		if(i+1 <= n && validate(i, i+1))
			total--;
		if(i-1 > 0 && validate(i, i-1))
			total--;
		//printf("%d: %d\n", i, total);
	}

	printf("%d\n", total);

	return 0;
}
