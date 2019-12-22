// https://codeforces.com/contest/1215/problem/A

#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main(){

	int a1, a2, k1, k2, n;
	int maxim, minim = 0;

	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &k1);
	scanf("%d", &k2);
	scanf("%d", &n);

	maxim = a1+a2;

	int sum = (k1-1)*a1 + (k2-1)*a2;
	if(n > sum)
		minim = n-sum;

	sum = k1 > k2 ? min(n/k2, a2) : min(n/k1, a1);
	//printf("%d %d\n", min(n/k2, a2), min(n/k1, a1));
	if(n > sum){
		sum += k1 > k2 ? min((n-sum*k2)/k1, a1) : min((n-sum*k1)/k2, a2);
		//printf("%d %d\n", min((n-sum)/k2, a2), min((n-sum)/k1, a1));
	}
	maxim = sum;

	printf("%d %d\n", minim, maxim);
}
