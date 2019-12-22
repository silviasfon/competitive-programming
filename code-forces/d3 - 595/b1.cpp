#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int q, n, k, j;
	int v[100005];
	vector<int> d;
	vector<int> graph;

	scanf("%d", &q);
	while(q--){
		scanf("%d", &n);
		d.clear();
		d.assign(n+1, 0);
		for(int i = 1; i <=n; i++){
			scanf("%d", &v[i]);
		}
		for(int i = 1; i <=n; i++){
			if(d[i]){
				printf("%d ", d[i]);
				continue;
			}
			graph.clear();
			graph.push_back(i);
			for(j = v[i], k = 1; j != i; j=v[j], k++){
				graph.push_back(j);
			}
			for(vector<int>::iterator m = graph.begin(); m != graph.end(); ++m)
			{
				d[*m] = k;
			}
			printf("%d ", d[i]);
		}
		printf("\n");
	}
}