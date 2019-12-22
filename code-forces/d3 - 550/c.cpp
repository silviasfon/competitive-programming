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

	int n, a;
	set<int> inc;
	set<int> dec;
	map<int, int> m;
	set<int>::reverse_iterator rit; 
	bool t = true;

	scanf("%d", &n);

	inc.clear();
	dec.clear();

	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		m[a]++;
		if(m[a]>1){
			dec.insert(a);
			if(m[a]>2)
				t = false;
		} else {
			inc.insert(a);
		}
	}
	if(!t)
		printf("NO\n");
	else{
		printf("YES\n");
		printf("%d\n", inc.size());
		for(auto i:inc)
			printf("%d ", i);
	    printf("\n");
		printf("%d\n", dec.size());
		for (rit = dec.rbegin(); rit != dec.rend(); rit++) 
        	printf("%d ", *rit);
        printf("\n");
	}

	return 0;
}