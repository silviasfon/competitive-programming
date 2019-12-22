// https://codeforces.com/contest/1131/problem/C

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	//int v[105];
	vector<int> v;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)	{
		scanf("%d", &k);
		v.push_back(k);
	}

	if(n > 3)
		sort(v.begin(), v.end());

	for (int i = 0; i < n; i+= 2){
		printf("%d ", v[i]);
	}
	if(n%2 == 0){
		for(int i = n-1; i > 0; i-=2) {
			printf("%d ", v[i]);
		}
	}
	else{
		for(int i = n-2; i > 0; i-=2){
			printf("%d ", v[i]);
		}
	}
	printf("\n");
	return 0;
}
