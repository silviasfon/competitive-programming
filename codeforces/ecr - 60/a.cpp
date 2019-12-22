#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, big = 0, ans = 0, c=0;
	int a[100005];

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] > big)
			big = a[i];
	}

	for(int i = 0; i < n; i++){
		c = 0;
		if(a[i]==big){
			c++;
			i++;
			while(a[i] == big && i < n){
				c++;
				i++;
			}
			if(c>ans)
				ans = c;
		}
	}

	printf("%d\n", ans);

	return 0;
}