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

	multiset<int> odd;
	multiset<int> even;
	int n, a, ans = 0, dif, j;

	scanf("%d", &n);
	even.clear();
	odd.clear();
	while(n--){
		scanf("%d", &a);
		if(a%2 == 0)
			even.insert(a);
		else
			odd.insert(a);
	}
	dif = odd.size()-even.size();
	if(dif > 1 || dif < -1){
		if(dif > 0){
			j = 0;
			for(auto i:odd){
				ans+=i;
				j++;
				if(j == dif-1)
					break;
			}
		} else {
			j = 0;
			for(auto i:even){
				ans+=i;
				j++;
				if(j >= abs(dif)-1)
					break;
			}
		}
	}

	printf("%d\n", ans);

	return 0;
}