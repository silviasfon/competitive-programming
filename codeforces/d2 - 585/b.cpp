// https://codeforces.com/contest/1215/problem/B

#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main(){

	int n, k;
	long long totalp = 0, totaln = 0;
	bool a[200005];
	long long pos[200005];
	long long neg[200005];

	scanf("%d", &n);

	memset(pos, 0, sizeof(pos));
	memset(neg, 0, sizeof(neg));

	scanf("%d", &k);
	k > 0 ? pos[0]++ : neg[0]++;
	totaln = neg[0];
	totalp = pos[0];
	//printf("%d\n0 %d %d\n", k, neg[0], pos[0]);

	for(int i = 1; i < n; i++){
		scanf("%d", &k);
		if(k > 0){
			//printf("%d\n", k);
			pos[i] = pos[i-1]+1;
			neg[i] = neg[i-1];
		}
		else{
			//printf("%d\n", k);
			pos[i] = neg[i-1];
			neg[i] = pos[i-1]+1;
		}
		totalp += pos[i];
		totaln += neg[i];
		//printf("%d %d %d\n", i, totaln, totalp);
	}

	printf("%lld %lld\n", totaln, totalp);
}
