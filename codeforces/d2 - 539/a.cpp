// https://codeforces.com/contest/1113/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, v;
	int total, custo;
	
	scanf("%d %d", &n, &v);

	if(v >= (n-1)){
		printf("%d\n", n-1);
	} else {
		custo = v;
		total = n - 1 - v;
		for(int i =2; i < n && total > 0; i++){
			custo += i;
			total -= 1;
		}
			printf("%d\n", custo);
	}

	return 0;
}
