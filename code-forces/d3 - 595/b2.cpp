#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int q, n, k, j;
	int v[200005];
	vector<int> p;
	vector<int> d;

	scanf("%d", &q);
	while(q--){
		scanf("%d", &n);
		d.clear();
		p.clear();
		d.assign(n+1, 0);
		p.assign(n+1, -1);
		for(int i = 1; i <=n; i++){
			scanf("%d", &v[i]);
		}
		for(int i = 1; i <=n; i++){
			if(p[i] > 0){
				printf("%d ", d[p[i]]);
				continue;
			}
			p[i] = i;
			for(j = v[i], k = 1; j != i; j=v[j], k++){
				p[j] = i;
			}
			d[i] = k;
			printf("%d ", d[p[i]]);
		}
		printf("\n");
	}
}